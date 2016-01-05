// #define VERZE_3

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */

struct conv_table
{
    uint16_t in;
    int16_t out;
};

#ifdef VERZE_3
				
				
struct conv_table ad_to_temp[]={				
//	AD value		temp*10	
  {	15123	,	0	},
  {	15573	,	100	},
  {	16014	,	200	},
  {	16446	,	300	},
  {	16869	,	400	},
  {	17283	,	500	},
  {	17689	,	600	},
  {	18088	,	700	},
  {	18478	,	800	},
  {	18861	,	900	},
  {	19237	,	1000	},
  {	65535	,	1001	},
};				
				
				
struct conv_table temp_to_da[]={				
//	temp*10		DA value	
  {	0	,	255	},
  {	100	,	253	},
  {	180	,	228	},
  {	220	,	216	},
  {	290	,	195	},
  {	420	,	150	},
  {	480	,	131	},
  {	520	,	119	},
  {	570	,	105	},
  {	640	,	87	},
  {	700	,	74	},
  {	760	,	62	},
  {	810	,	53	},
  {	1000	,	20	},
  {	65535	,	15	},
};				

#else// verze 2

//	version with	6	 PTC	
					
				
struct conv_table ad_to_temp[]={				
//	AD value		temp*10	
  {	24576	,	0	},
  {	25166	,	100	},
  {	25739	,	200	},
  {	26293	,	300	},
  {	26831	,	400	},
  {	27353	,	500	},
  {	27859	,	600	},
  {	28351	,	700	},
  {	28828	,	800	},
  {	29293	,	900	},
  {	29744	,	1000	},
  {	65535	,	1001	},
};				
				
				
struct conv_table temp_to_da[]={				
//	temp*10		DA value	
  {	0	,	255	},
  {	100	,	253	},
  {	180	,	228	},
  {	220	,	216	},
  {	290	,	195	},
  {	420	,	150	},
  {	480	,	131	},
  {	520	,	119	},
  {	570	,	105	},
  {	640	,	87	},
  {	700	,	74	},
  {	760	,	62	},
  {	810	,	53	},
  {	1000	,	20	},
  {	65535	,	15	},
};				


#endif

uint16_t convert(struct conv_table *table, uint16_t value )
{
    if (value <= table->in) return table->out;
    while (1)
    {
        if (value <= table[1].in)
        {
            int32_t d_i=table[1].in-table[0].in;
            int32_t d_o=table[1].out-table[0].out;
            int32_t d_v=value-table[0].in;
            return table->out+d_v*d_o/d_i;
        }
        table++;
    }
    return 0xffff;
}

#define TEMP_MIN    400
#define TEMP_MAX    800
#define NR_LED      9 // the last virtual led is for the blikning
#define BLINK_BIT   4 // adjust for the right blinking frequency 

void display_temp(uint16_t temp, uint8_t blink_active)
{
    uint8_t n=temp<TEMP_MIN?0:((temp-TEMP_MIN)*(NR_LED-1)/(TEMP_MAX-TEMP_MIN)+1);
    if (n>8 && !blink_active)
    {
        // blinking
        n=7; // to put off the last led
    }
    if (n<1) LED1_SetLow(); else LED1_SetHigh();
    if (n<2) LED2_SetLow(); else LED2_SetHigh();
    if (n<3) LED3_SetLow(); else LED3_SetHigh();
    if (n<4) LED4_SetLow(); else LED4_SetHigh();
    if (n<5) LED5_SetLow(); else LED5_SetHigh();
    if (n<6) LED6_SetLow(); else LED6_SetHigh();
    if (n<7) LED7_SetLow(); else LED7_SetHigh();
    if (n<8) LED8_SetLow(); else LED8_SetHigh();
}


void main(void) {
    uint32_t blink_cnt=0;
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    while (1) 
    {
        CLRWDT();
      
        uint16_t in=ADC_GetConversion(0);

        uint16_t temperature=convert(ad_to_temp, in);
//        temperature=(unsigned long)in*(TEMP_MAX-TEMP_MIN)/65536+TEMP_MIN; // killme
        display_temp(temperature, (blink_cnt>>BLINK_BIT) & 1);
        DAC_SetOutput(convert(temp_to_da, temperature));
        blink_cnt++;
    }
}
/**
 End of File
 */