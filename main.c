#include "GPIO.h"
int main(void)
{
	Init_CLK(0);
	Init_CLK(2);
	Init_GPIO_MODE(MY_GPIOA,5,OUTPUT_MODE);
	Init_GPIO_MODE(MY_GPIOC,13,INPUT_MODE);
	SET_PULLUP_PULLDOWN(MY_GPIOC,MY_PULL_UP,13);
	while(1)
	{
		if(!(GPIO_IDR(MY_GPIOC) & (1<<13)))
		{
			MY_SET_BIT(MY_GPIOA,5);
		}
		else
		{
			MY_CLEAR_BIT(MY_GPIOA,5);
		}
	}
}
