#include <stdio.h>
#include "xil_io.h"
#include "xparameters.h"
#include "xbasic_types.h"
#include "xgpio.h"
#include "xstatus.h"
#include "sleep.h"

XGpio leds;
/******************************************************************/
int main()
{
	Xuint32 led1, led2, led3, led4;
	XGpio_Initialize(&leds, XPAR_LEDS_DEVICE_ID);

	led1 = 0x1;
	led2 = 0x2;
	led3 = 0x4;
	led4 = 0x8;

	while(1)
	{
		XGpio_DiscreteWrite(&leds,1,0);
		usleep(500000);

		XGpio_DiscreteWrite(&leds,1,led1);
		usleep(500000);
		XGpio_DiscreteWrite(&leds,1,led2);
		usleep(500000);
		XGpio_DiscreteWrite(&leds,1,led3);
		usleep(500000);
		XGpio_DiscreteWrite(&leds,1,led4);
		usleep(500000);
	}
	return 0;
}
