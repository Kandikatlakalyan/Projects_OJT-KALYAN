#include"stm32f4xx.h"
#define GPIOA_EN (1<<0)
#define PA5_MOD (1<<10)
void gpioa(void)
{
	RCC->AHB1ENR |=GPIOA_EN;
	GPIOA->MODER |=PA5_MOD;
}
void led_on(void)
{
	GPIOA->ODR |=(1<<5);

}
void led_off(void)
{
	GPIOA->ODR &=~(1<<5);
}
