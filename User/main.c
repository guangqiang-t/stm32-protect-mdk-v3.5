#include "stm32f10x.h"
#include "delay.h"
#include "LED.h"

int main (void)
{
	LEDInit();
	
	while(1)
	{
		LEDON(2);
		DelayMs(200);
		LEDOFF(2);
		DelayMs(200);
	}
	
	return 0;
}

