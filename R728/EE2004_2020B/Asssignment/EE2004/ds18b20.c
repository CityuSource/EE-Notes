#include <stdint.h>
#include <stddef.h>
#include <xc.h>
#include "ds18b20_charlie.h"
#define PIN_A PORTAbits.RA2
#define BUS_A TRISAbits.TRISA2

#define _XTAL_FREQ 32000000

int onewire_reset(void)
{
    BUS_A = 0;      //set port as output
    PIN_A = 0;      //set pin to low
    __delay_us(480);    
    BUS_A = 1;      //set port as input
    __delay_us(60);
    
    if (PIN_A == 0) //check if there is a presence pulse
    {
        __delay_us(420);
        return 0;   // present
    }
    else
    {
        __delay_us(420);
        return 1;   //not present
    }
}

int read_bit(void)
{
    unsigned int A2state = 0;
    BUS_A = 0;      //set port as output
    PIN_A = 0;      //pull pin to start timeslot
    __delay_us(6);
    BUS_A = 1;      //set port as input
    __delay_us(9);
    A2state = PIN_A;
    __delay_us(50);
    return A2state; 
}

int read_byte(void)
{
    int i, result = 0;
    for(i=0;i<8;i++)
    {
        result >>= 1;
        if(read_bit())
            result |= 0x80;
        return result;
    }
}

void write_bit(unsigned int b)
{
    BUS_A = 0;      //set pin as output
    PIN_A = 0;      //pull pin low to start timeslot
    if(b == 1)
    {
        __delay_us(3);
        BUS_A = 1;  //release, set as input
        __delay_us(62);
    }
    else
    {
        __delay_us(57);
        BUS_A = 1;  //release, set as input
        __delay_us(8);
    }
}

void write_byte(unsigned int data)
{
    int i;
    for(i=0;i<8;i++)
    {
        write_bit(data & 0x01);
        data >>=1;
    }
}


