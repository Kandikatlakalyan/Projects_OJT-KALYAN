#include"stm32f4xx.h"

#define GPIOAEN 	(1U<<0)

#define PIN5		(1U<<5)


#define LED			PIN5


int main()

{

	RCC->AHB1ENR |= GPIOAEN;


	GPIOA->MODER |= 0X00000400;


	tim2_1hz_init();

	while(1)

	{

		tim_delay();

		GPIOA->ODR ^= LED;

	}

}
