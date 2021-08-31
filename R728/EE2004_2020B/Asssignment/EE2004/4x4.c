#include <p18f4520.h>

#define _XTAL_FREQ 20000000 //define crystal frequency to 20MHz

#pragma config OSC = HS, WDT = OFF, LVP = OFF

#define U6U7_A PORTCbits.RC0
#define U6U7_B PORTCbits.RC1
#define U6U7_C PORTCbits.RC2

unsigned char Segment[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
unsigned char DispBuf[4] = {0, 0, 1, 8};
unsigned char i;
/////////////////////////////////////////////////
///////// variables /////////////////////////////

/////////////////////////////////////////////////
///////// functions /////////////////////////////

void kp_scan(void);

/////////////////////////////////////////////////
void delay(int cnt)
{
   unsigned int i;
   for (i = 0; i < cnt; i++)
      ;
   return;
}

void main()
{
   //PORTD=binary_pattern[0];
   ADCON1 = 0x0f;
   TRISC = 0b11111111;
   TRISB = 0b00000000; //Set PortBOutput
   TRISD = 0b00000000;
   PORTC = 0b00000000;
   while (1)
   {
      //  for (i=0; i<10; i++)
      //        {
      //           PORTB = binary_pattern[i];
      //           delay(100000);  //add delay of one second
      //       }
      //  kp_scan();
      if (PORTCbits.RC0 == 0)
      {
         for (i = 0; i <= 3; i++)
         {
            PORTD = 0;
            PORTB = i;
            PORTD = Segment[i];
            delay(100);
         }
      }
      else if (PORTCbits.RC1 == 0)
      {
         for (i = 0; i <= 3; i++)
         {
            PORTD = 0;
            PORTB = i;
            PORTD = Segment[i + 4];
            delay(100);
         }
      }
      else if (PORTCbits.RC2 == 0)
      {
         for (i = 0; i <= 3; i++)
         {
            PORTD = 0;
            PORTB = i;
            PORTD = Segment[i + 8];
            delay(100);
         }
      }
   }
}

/////////////////////////////////////////////////
