#include"stm32f4xx.h"

#define TIM2EN		(1U<<0)

#define CR1_CEN      (1U<<0)

#define SR_UIF       (1U<<0)

									//TIMER IS A COUNTER.
void tim2_1hz_init(void)						//

{

	/*Enable clock access to tim2*/

	RCC->APB1ENR |= TIM2EN;

	/*Set prescaler value*/

	TIM2->PSC =16000-1;

	/*Set auto-reload value*/

	TIM2->ARR = 1000;

	/*Clear counter*/

	TIM2->CNT =0;

	/*Enable timer*/

	TIM2->CR1 =CR1_CEN;

}


void tim_delay(void)

{


       /*Wait for UIF */

	while(!(TIM2->SR & SR_UIF)){}


	/*Clear UIF*/

	TIM2->SR &=~SR_UIF;


}
