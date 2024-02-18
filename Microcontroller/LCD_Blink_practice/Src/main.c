#include "stm32f4xx.h"
void delay(int n);
int main(void) {
RCC->AHB1ENR |= 1;
GPIOA->MODER |= 0x00000400;
while(1) {
GPIOA->ODR |= 0x00000020;
delay(100);
GPIOA->ODR &= ~0x00000020;
delay(100);
}
}

void delay(int n) {
int i;
for (; n > 0; n--)
for (i = 0; i < 3195; i++);
}
