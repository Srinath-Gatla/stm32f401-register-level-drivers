#include "GPIO.h"
int main(void)
{
	uint8_t count;
	Init_CLK(0);
	Init_CLK(2);
	for(uint32_t i=0;i<8;i++)
	{
		Init_GPIO_MODE(MY_GPIOA,i,OUTPUT_MODE);
	}
	Init_GPIO_MODE(MY_GPIOC,13,INPUT_MODE);
	SET_PULLUP_PULLDOWN(MY_GPIOC,MY_PULL_UP,13);
	while(1)
	{
		if(!(GPIO_IDR(MY_GPIOC)& (1<<13)))
		{
			count++;
			CLEAR_BITS(MY_GPIOA,0xFF);
			SET_BITS(MY_GPIOA,count);
			for(uint32_t i=0;i<2000000;i++);
		}
	}
}
