#include <p18f4520.h>
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#include <stdio.h>
#include <stdlib.h>
#include <xlcd.h>

#define zero PORTCbits.RC0
#define one PORTCbits.RC1
#define two PORTCbits.RC2
#define three PORTCbits.RC3
#define four PORTCbits.RC4
#define five PORTCbits.RC5
#define six PORTCbits.RC6
#define seven PORTCbits.RC7

// Variables
char startup[14] = {'P', 'r', 'e', 's', 's', ' ', '4', ' ', 'T', 'i', 'm', 'e', 's'};
char wait[14] = {'O', 'K', '!'};
char starter[14] = {'P', 'r', 'e', 's', 's', ' ', 'a', 'n', 'y', ' ', 'k', 'e', 'y'};
char d[14] = {' '};
int i, j, count, temp;

void Delay(int cnt);
void Keypad();
// Functions in this program
void DelayFor18TCY(void)
{
    Nop();
}
void DelayPORXLCD(void)
{
    Delay1KTCYx(60); //Delay of 15ms
    return;
}
void DelayXLCD(void)
{
    Delay1KTCYx(20); //Delay of 5ms
    return;
}

void main()
{
    ADCON1 = 0x0f;
    TRISC = 0b11111111;
    TRISB = 0b000000000; //Set PortBOutput
    TRISD = 0b00000000;
    PORTC = 0b00000000;
    i = 0;
    d[0] = i + 48;
    OpenXLCD(EIGHT_BIT & LINES_5X7);
    WriteCmdXLCD(SHIFT_DISP_LEFT);        // LCD displays time from left handside
    WriteCmdXLCD(CURSOR_OFF & BLINK_OFF); //turn off cursor and blink on LCD
    WriteCmdXLCD(0x01);                   // Clear the screen
    SetDDRamAddr(0x80);                   // display at 1st row, column 0
    putsXLCD(starter);
    SetDDRamAddr(0x40); // display at 2nd row, column 0
    putsXLCD(d);

    while (1) // Wait for button to be pressed
    {
        if (zero) // if button is pressed
        {
            while (zero) // Wait for button to release
            {
            }
            i++; // When button release do function
            break;
        }
    }
    WriteCmdXLCD(0x01);
    SetDDRamAddr(0x80); // display at 1st row, column 0
    putsXLCD(d);
    while (1)
        ;
}

void Delay(int cnt)
{
    temp = i;
    for (i = 0; i < cnt; i++)
        ;
    i = temp;
    return;
}

void Keypad()
{
    i = 0;
    while (i < 4)
    {
        if (zero || one || two || three || four || five || six || seven)
        {
            if (zero)
            {
                Delay(50);
                while (zero)
                    ;
                user[i] = 0, i++;
            }

            else if (one)
            {
                Delay(50);
                while (one)
                    ;
                user[i] = 1, i++;
            }

            else if (two)
            {
                Delay(50);
                while (two)
                    ;
                user[i] = 2, i++;
            }

            else if (three)
            {
                Delay(50);
                while (three)
                    ;
                user[i] = 3, i++;
            }

            else if (four)
            {
                Delay(50);
                while (four)
                    ;
                user[i] = 4, i++;
            }

            else if (five)
            {
                Delay(50);
                while (five)
                    ;
                user[i] = 5, i++;
            }

            else if (six)
            {
                Delay(50);
                while (six)
                    ;
                user[i] = 6, i++;
            }

            else if (seven)
            {
                Delay(50);
                while (seven)
                    ;
                user[i] = 7, i++;
            }
        }
        WriteCmdXLCD(0x01);
        SetDDRamAddr(0x80); //place the cursor at 1st row, column 0
        putsXLCD(pInput);
        Delay(100000);
    }

    /* ------------------------ Display the user's input ------------------------ */

    for (i = 0; i < 3; i++)
    {
        table[i] = num_to_ASCII(user[i]);
    }

    WriteCmdXLCD(0x01);
    SetDDRamAddr(0x80); //place the cursor at 1st row, column 0
    putsXLCD(your);
    while (BusyXLCD())
        ;

    SetDDRamAddr(0x40); //place the cursor at 2nd row, column 0
    putsXLCD(table);

    Delay(10000000);
    /* -------------------------------------------------------------------------- */
}