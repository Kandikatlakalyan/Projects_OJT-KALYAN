#include "stm32f4xx.h"
#include "usart2.h"
int main()
{
	uart2_init();
	while(1)
	{
		uart2_write('y');
	}
	return 0;
}
