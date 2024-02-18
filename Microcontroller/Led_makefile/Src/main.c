#include"stm32f4xx.h"
#include"gpioa.h"
#include"delay.h"
int main()
{
	gpioa();
	while(1)
	{
		led_on();
		delay(100);
		led_off();
		delay(100);
	}
}
