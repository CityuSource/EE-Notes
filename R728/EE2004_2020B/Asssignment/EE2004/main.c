#include <p18f4520.h>
#include <stdio.h>
#include <stdlib.h>
#include <timers.h>
#include "xlcd.h"

#define zero PORTCbits.RC0
#define one PORTCbits.RC1
#define two PORTCbits.RC2
#define three PORTCbits.RC3
#define four PORTCbits.RC4
#define five PORTCbits.RC5
#define six PORTCbits.RC6
#define seven PORTCbits.RC7

// Variables
unsigned char Segment[11] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F, 0x76};
unsigned int user[4], answer[4], check[4], table[4];
unsigned char config1 = 0x00;
unsigned int i, j, count, z, temp, k; // counters and temporary variables
int flag = 1;                         // Indicate if the game is over or not

/* --------------------------- Sentences to output -------------------------- */
char starter[14] = {'P', 'r', 'e', 's', 's', ' ', 'a', 'n', 'y', ' ', 'k', 'e', 'y'};
char starter1[14] = {'T', 'o', ' ', 's', 't', 'a', 'r', 't'};
char pInput[14] = {'G', 'u', 'e', 's', 's'};
char your[14] = {'Y', 'o', 'u', 'r', ' ', 'a', 'n', 's', 'w', 'e', 'r'};
char correct[14] = {'c', 'o', 'r', 'r', 'e', 'c', 't'};
char incorrect[14] = {'i', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't'};
/* -------------------------------------------------------------------------- */

// Functions in this program
void gameStart(); // Main game code
void Delay(int cnt);
void Keypad(); // Scan for numbers pressed
void display();
int num_to_ASCII(int a);
void acheck();

void main()
{
    k = 0;
    ADCON1 = 0x0f;
    TRISC = 0b11111111;
    TRISB = 0b000000000; //Set PortBOutput
    TRISD = 0b00000000;
    PORTC = 0b00000000;

    OpenXLCD(EIGHT_BIT & LINES_5X7);      //setup LCD
    WriteCmdXLCD(SHIFT_DISP_LEFT);        // LCD displays from left hand side
    WriteCmdXLCD(CURSOR_OFF & BLINK_OFF); //turn off cursor and blink on LCD

    while (1)
    {
        gameStart();
        Delay(1000);
    }
}

/* ------------------------- Main game code is here ------------------------- */
void gameStart()
{                       // Tell user to press a button to start
    SetDDRamAddr(0x80); //place the cursor at 1st row, column 0
    WriteCmdXLCD(0x01); // Clear LCD
    putsXLCD(starter);
    SetDDRamAddr(0x40); //place the cursor at 2nd row, column 0
    putsXLCD(starter1);
    /* ---------------------------- Generate solution --------------------------- */

    while (1)
    {
        k++;
        Delay(50);
        if (zero || one || two || three || four || five || six || seven)
        {
            while (zero || one || two || three || four || five || six || seven)
                ;
            break;
        }
    }
    for (i = 0; i < 4; i++)
    {
        z = pow(10, i);
        answer[i] = (k / z) % 8;
    }
    /* -------------------------------------------------------------------------- */

    /* ------ Temporary function to display answer please delete once done ------ */

    for (i = 0; i < 4; i++)
    {
        table[i] = num_to_ASCII(answer[i]);
    }
    while (BusyXLCD())
        ;
    WriteCmdXLCD(0x01);
    putsXLCD(table);
    Delay(100000000);
    /* -------------------------------------------------------------------------- */

    for (i = 0; i < 4; i++) // Reinitialize array for checking
    {
        check[i] = 2;
    }

    while (flag)
    {
        Keypad(); // User input

        acheck();

        for (i = 0, count = 0; i < 4; i++)
        {
            // checks if every single answer is correct
            if (check[i] = 1)
            {
                count++;
            }

            if (count == 4)
            {
                // Toggles flag if appropriate and resets count
                flag = 0,
                count = 0;
            }
            else
            {
                count = 0;
            }
        }
        /* -------------------------------------------------------------------------- */

        display(); // Display result
    }
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

void acheck()
{
    /* ------------------------ Code to check the answers ----------------------- */
    /* ------------------------ Check for correct digits ------------------------ */
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (user[i] == answer[j])
            {
                check[i] = 0;
            }
        }
    }

    /* --------------------- Next check for correct position -------------------- */

    for (i = 0; i < 4; i++)
    {
        if (user[i] == answer[i])
        {
            check[i] = 1;
        }
    }
    /* -------------------------------------------------------------------------- */
    /* -------------------------------------------------------------------------- */
}

int num_to_ASCII(int a)
{
    return a + 48;
}

void display()
{
    if (flag == 0)
    {
        for (i = 0; i < 4; i++)
        {
            table[i] = num_to_ASCII(check[i]);
        }
        WriteCmdXLCD(0x01);
        SetDDRamAddr(0x80);
        putsXLCD(table);
        Delay(1000000);

        /* --------- Display the check array and tell user if he wins or not -------- */

        for (i = 0; i < 4; i++)
        {
            table[i] = num_to_ASCII(answer[i]);
        }
        WriteCmdXLCD(0x01);
        SetDDRamAddr(0x80); //place the cursor at 1st row, column 0
        putsXLCD(correct);
        while (BusyXLCD())
            ;
        SetDDRamAddr(0x40); //place the cursor at 2nd row, column 0
        putsXLCD(table);

        Delay(10000000);
        /* -------------------------------------------------------------------------- */
    }
    else
    {

        /* --------------------------- Display check array -------------------------- */

        for (i = 0; i < 4; i++)
        {
            table[i] = num_to_ASCII(check[i]);
        }
        WriteCmdXLCD(0x01);
        SetDDRamAddr(0x80); //place the cursor at 1st row, column 0
        putsXLCD(incorrect);
        while (BusyXLCD())
            ;
        SetDDRamAddr(0x40); //place the cursor at 2nd row, column 0
        putsXLCD(table);
        Delay(10000000);
        /* -------------------------------------------------------------------------- */
    }
}

void Delay(int cnt)
{
    temp = i;
    for (i = 0; i < cnt; i++)
        ;
    i = temp;
    return;
}
