#include"stm32f4xx.h"
#define SR_CC1IF 	(1U<<1)
uint32_t timestamp;

int main()
{

	tim2_pa5_output_compare();
	tim3_pa6_input_capture();
	while(1)
		{
	       	/*Wait until edge is captured*/
			while(!(TIM3->SR & SR_CC1IF))
			{

			}

			/*Read captured value*/
			timestamp =  TIM3->CCR1;
		}
}
