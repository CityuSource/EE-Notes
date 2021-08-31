#include <p18F4520.h>
#include "xlcd.h"

#pragma config OSC = HS, WDT = OFF, LVP = OFF

// ram char table[11];

void DelayFor18TCY(void)
{
    Nop();
}
void DelayPORXLCD(void)
{
    Delay1KTCYx(15); // 15ms Delay = 15ms*4MHz/4 = 15K
}

void main1()
{
    // int i = 0;
    // OpenXLCD(EIGHT_BIT & LINES_5X7); //setup LCD
    // WriteCmdXLCD(SHIFT_DISP_LEFT);   // LCD displays time from left hand

    // WriteCmdXLCD(CURSOR_OFF & BLINK_OFF); //turn off cursor and blink

    // SetDDRamAddr(0x80);      // display at 1st row, column 0
    // for (i = 0; i < 11; i++) //copy table' content to table2, ie Timer: 0000
    //     table[i] = i;

    // putsXLCD(table);
}