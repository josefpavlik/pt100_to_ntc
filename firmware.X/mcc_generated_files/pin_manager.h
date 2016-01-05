/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1704
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_AN0 aliases
#define channel_AN0_TRIS               TRISA0
#define channel_AN0_LAT                LATA0
#define channel_AN0_PORT               RA0
#define channel_AN0_WPU                WPUA0
#define channel_AN0_ANS                ANSA0
#define channel_AN0_SetHigh()    do { LATA0 = 1; } while(0)
#define channel_AN0_SetLow()   do { LATA0 = 0; } while(0)
#define channel_AN0_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define channel_AN0_GetValue()         RA0
#define channel_AN0_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define channel_AN0_SetPullup()    do { WPUA0 = 1; } while(0)
#define channel_AN0_ResetPullup()   do { WPUA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()   do { ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()   do { ANSA0 = 0; } while(0)
// get/set LED8 aliases
#define LED8_TRIS               TRISA1
#define LED8_LAT                LATA1
#define LED8_PORT               RA1
#define LED8_WPU                WPUA1
#define LED8_ANS                ANSA1
#define LED8_SetHigh()    do { LATA1 = 1; } while(0)
#define LED8_SetLow()   do { LATA1 = 0; } while(0)
#define LED8_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define LED8_GetValue()         RA1
#define LED8_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define LED8_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define LED8_SetPullup()    do { WPUA1 = 1; } while(0)
#define LED8_ResetPullup()   do { WPUA1 = 0; } while(0)
#define LED8_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define LED8_SetDigitalMode()   do { ANSA1 = 0; } while(0)
// get/set LED7 aliases
#define LED7_TRIS               TRISA2
#define LED7_LAT                LATA2
#define LED7_PORT               RA2
#define LED7_WPU                WPUA2
#define LED7_ANS                ANSA2
#define LED7_SetHigh()    do { LATA2 = 1; } while(0)
#define LED7_SetLow()   do { LATA2 = 0; } while(0)
#define LED7_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define LED7_GetValue()         RA2
#define LED7_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define LED7_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define LED7_SetPullup()    do { WPUA2 = 1; } while(0)
#define LED7_ResetPullup()   do { WPUA2 = 0; } while(0)
#define LED7_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define LED7_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define IO_RA3_PORT               RA3
#define IO_RA3_WPU                WPUA3
#define IO_RA3_GetValue()         RA3

#define IO_RA3_SetPullup()    do { WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()   do { WPUA3 = 0; } while(0)
// get/set LED2 aliases
#define LED2_TRIS               TRISA4
#define LED2_LAT                LATA4
#define LED2_PORT               RA4
#define LED2_WPU                WPUA4
#define LED2_ANS                ANSA4
#define LED2_SetHigh()    do { LATA4 = 1; } while(0)
#define LED2_SetLow()   do { LATA4 = 0; } while(0)
#define LED2_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define LED2_GetValue()         RA4
#define LED2_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define LED2_SetPullup()    do { WPUA4 = 1; } while(0)
#define LED2_ResetPullup()   do { WPUA4 = 0; } while(0)
#define LED2_SetAnalogMode()   do { ANSA4 = 1; } while(0)
#define LED2_SetDigitalMode()   do { ANSA4 = 0; } while(0)
// get/set LED1 aliases
#define LED1_TRIS               TRISA5
#define LED1_LAT                LATA5
#define LED1_PORT               RA5
#define LED1_WPU                WPUA5
#define LED1_SetHigh()    do { LATA5 = 1; } while(0)
#define LED1_SetLow()   do { LATA5 = 0; } while(0)
#define LED1_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define LED1_GetValue()         RA5
#define LED1_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define LED1_SetPullup()    do { WPUA5 = 1; } while(0)
#define LED1_ResetPullup()   do { WPUA5 = 0; } while(0)
// get/set LED6 aliases
#define LED6_TRIS               TRISC0
#define LED6_LAT                LATC0
#define LED6_PORT               RC0
#define LED6_WPU                WPUC0
#define LED6_ANS                ANSC0
#define LED6_SetHigh()    do { LATC0 = 1; } while(0)
#define LED6_SetLow()   do { LATC0 = 0; } while(0)
#define LED6_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define LED6_GetValue()         RC0
#define LED6_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define LED6_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define LED6_SetPullup()    do { WPUC0 = 1; } while(0)
#define LED6_ResetPullup()   do { WPUC0 = 0; } while(0)
#define LED6_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define LED6_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set OPA1INNeg aliases
#define OPA1INNeg_TRIS               TRISC1
#define OPA1INNeg_LAT                LATC1
#define OPA1INNeg_PORT               RC1
#define OPA1INNeg_WPU                WPUC1
#define OPA1INNeg_ANS                ANSC1
#define OPA1INNeg_SetHigh()    do { LATC1 = 1; } while(0)
#define OPA1INNeg_SetLow()   do { LATC1 = 0; } while(0)
#define OPA1INNeg_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define OPA1INNeg_GetValue()         RC1
#define OPA1INNeg_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define OPA1INNeg_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define OPA1INNeg_SetPullup()    do { WPUC1 = 1; } while(0)
#define OPA1INNeg_ResetPullup()   do { WPUC1 = 0; } while(0)
#define OPA1INNeg_SetAnalogMode()   do { ANSC1 = 1; } while(0)
#define OPA1INNeg_SetDigitalMode()   do { ANSC1 = 0; } while(0)
// get/set OPA1OUT aliases
#define OPA1OUT_TRIS               TRISC2
#define OPA1OUT_LAT                LATC2
#define OPA1OUT_PORT               RC2
#define OPA1OUT_WPU                WPUC2
#define OPA1OUT_ANS                ANSC2
#define OPA1OUT_SetHigh()    do { LATC2 = 1; } while(0)
#define OPA1OUT_SetLow()   do { LATC2 = 0; } while(0)
#define OPA1OUT_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define OPA1OUT_GetValue()         RC2
#define OPA1OUT_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define OPA1OUT_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define OPA1OUT_SetPullup()    do { WPUC2 = 1; } while(0)
#define OPA1OUT_ResetPullup()   do { WPUC2 = 0; } while(0)
#define OPA1OUT_SetAnalogMode()   do { ANSC2 = 1; } while(0)
#define OPA1OUT_SetDigitalMode()   do { ANSC2 = 0; } while(0)
// get/set LED5 aliases
#define LED5_TRIS               TRISC3
#define LED5_LAT                LATC3
#define LED5_PORT               RC3
#define LED5_WPU                WPUC3
#define LED5_ANS                ANSC3
#define LED5_SetHigh()    do { LATC3 = 1; } while(0)
#define LED5_SetLow()   do { LATC3 = 0; } while(0)
#define LED5_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define LED5_GetValue()         RC3
#define LED5_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define LED5_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define LED5_SetPullup()    do { WPUC3 = 1; } while(0)
#define LED5_ResetPullup()   do { WPUC3 = 0; } while(0)
#define LED5_SetAnalogMode()   do { ANSC3 = 1; } while(0)
#define LED5_SetDigitalMode()   do { ANSC3 = 0; } while(0)
// get/set LED4 aliases
#define LED4_TRIS               TRISC4
#define LED4_LAT                LATC4
#define LED4_PORT               RC4
#define LED4_WPU                WPUC4
#define LED4_ANS                ANSC4
#define LED4_SetHigh()    do { LATC4 = 1; } while(0)
#define LED4_SetLow()   do { LATC4 = 0; } while(0)
#define LED4_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define LED4_GetValue()         RC4
#define LED4_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISC4 = 0; } while(0)

#define LED4_SetPullup()    do { WPUC4 = 1; } while(0)
#define LED4_ResetPullup()   do { WPUC4 = 0; } while(0)
#define LED4_SetAnalogMode()   do { ANSC4 = 1; } while(0)
#define LED4_SetDigitalMode()   do { ANSC4 = 0; } while(0)
// get/set LED3 aliases
#define LED3_TRIS               TRISC5
#define LED3_LAT                LATC5
#define LED3_PORT               RC5
#define LED3_WPU                WPUC5
#define LED3_ANS                ANSC5
#define LED3_SetHigh()    do { LATC5 = 1; } while(0)
#define LED3_SetLow()   do { LATC5 = 0; } while(0)
#define LED3_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define LED3_GetValue()         RC5
#define LED3_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISC5 = 0; } while(0)

#define LED3_SetPullup()    do { WPUC5 = 1; } while(0)
#define LED3_ResetPullup()   do { WPUC5 = 0; } while(0)
#define LED3_SetAnalogMode()   do { ANSC5 = 1; } while(0)
#define LED3_SetDigitalMode()   do { ANSC5 = 0; } while(0)

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */