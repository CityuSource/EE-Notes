#include <p18f4520.h> // Configuration bits file stored in a header file
#include <stdio.h>
#include <string.h>
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config WRTB = OFF // Boot Block Write Protection bit (Boot Block not write protected)
#pragma config WRTC = OFF // Configuration Register Write Protection bit (Configuration Register not write protected)
#pragma config WRTD = OFF // Data EEPROM write protection bit (Data EEPROM NOT write protected)

#define PIN_A PORTAbits.RA4
#define BUS_A TRISAbits.TRISA4

// Functions in this Program:
void Delay(int cnt);
int convert(long long n);

// This array stores binary bit pattern that will be send to PORTD
unsigned char seg[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
unsigned char DispBuf[4] = {0, 0, 1, 8};
unsigned short temp_lsb, temp_msb;
long long n;
char buf1[10];
char getBit[10];
int k;

void Delay(int cnt)
{
    unsigned int i;
    for (i = 0; i < cnt; i++)
        ;
    return;
}

int onewire_reset(void)
{
    BUS_A = 0; //set port as output
    PIN_A = 0; //set pin to low
    Delay(480);
    BUS_A = 1; //set port as input
    Delay(60);

    if (PIN_A == 0) //check if there is a presence pulse
    {
        Delay(420);
        return 0; // present
    }
    else
    {
        Delay(420);
        return 1; //not present
    }
}

int convert(long long n)
{
    unsigned int dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

void main(void)
{
    PIN_A = 0x00; // send reset pulse to the DS18B20 sensor
    BUS_A = 0x00; // configure DS18B20_PIN pin as output
    Delay(500);   // wait 500 us

    BUS_A = 0xFF; // configure DS18B20_PIN pin as sinput
    Delay(500);

    ADCON1 = 0x0f; //Set All Port Digit I/O
    TRISB = 0x00;
    TRISD = 0x00;

    while (1)
    {
        // n = PIN_A;
        // Delay(500);

        // n = convert(n);

        // switch (n){
        // case 0: n = Segment[0];
        //         break;
        // case 1: n = Segment[1];
        //         break;
        // case 2: n = Segment[2];
        //         break;
        // case 3: n = Segment[3];
        //         break;
        // case 4: n = Segment[4];
        //         break;
        // case 5: n = Segment[5];
        //         break;
        // case 6: n = Segment[6];
        //         break;
        // case 7: n = Segment[7];
        //         break;
        // case 8: n = Segment[8];
        //         break;
        // case 9: n = Segment[9];
        //         break;
        // default: n = Segment[9];
        //         break;
        // }

        // PORTB = 1;
        // PORTD = n;
        // Delay(10000);
    }
}
