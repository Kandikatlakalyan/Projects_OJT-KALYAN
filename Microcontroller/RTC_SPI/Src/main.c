#include "stm32f4xx.h"
#define SLAVE_ADDR 0x68 /* 1101 000. DS1337 */
void delayMs(int n);
void I2C1_init(void);
void I2C1_burstWrite(char saddr, char maddr, int n, char* data);
int main(void) {
/* 00 01 02 03 04 05 06 */
char timeDateToSet[15] = {0x55, 0x58,0x10, 0x03, 0x26, 0x09, 0x17, 0}; /* 2017 September 26, Tuesday,
10:58:55 */
I2C1_init();
I2C1_burstWrite(SLAVE_ADDR, 0, 7, timeDateToSet);
while (1) { }
}

void I2C1_init(void) {
RCC->AHB1ENR |= 2; /* Enable GPIOB clock */
RCC->APB1ENR |=0x00200000; /* Enable I2C1 clock */
/* configure PB8, PB9 pins for I2C1 */
GPIOB->AFR[1] &= ~0x000000FF; /* PB8, PB9 I2C1 SCL, SDA */
GPIOB->AFR[1] |= 0x00000044;
GPIOB->MODER &= ~0x000F0000; /* PB8, PB9 use alternate function */
GPIOB->MODER |= 0x000A0000;
GPIOB->OTYPER |= 0x00000300; /* output open-drain */
GPIOB->PUPDR &=~0x000F0000; /* with pull-ups */
GPIOB->PUPDR |= 0x00050000;
I2C1->CR1 = 0x8000; /* software reset I2C1 */
I2C1->CR1 &= ~0x8000;
/* out of reset */
I2C1->CR2 = 0x0010; /* peripheral clock is 16 MHz*/
I2C1->CCR = 80; /* standard mode, 100kHz clock */
I2C1->TRISE =17; /* maximum rise time */
I2C1->CR1 |= 0x0001; /* enable I2C1
module */
}
while (I2C1->SR2 & 2); /* wait until bus not busy */
I2C1->CR1 &=~0x800; /* disable POS */
I2C1->CR1 |= 0x100; /* generate start */
while (!(I2C1- >SR1 & 1)); /* wait until start flag is set */
I2C1->DR = saddr << 1; /* transmit slave address */
while (!(I2C1->SR1 &2)); /* wait until addr flag is set */
tmp = I2C1->SR2; /* clearaddr flag */
while (!(I2C1->SR1 & 0x80)); /* wait until data
register empty */
I2C1->DR = maddr; /* send memory address */
/* write all the data */
for (i = 0; i < n; i++)
{
while (!(I2C1->SR1 & 0x80)); /* wait until data register empty */
I2C1->DR = *data++; /* transmit memory address */
}
while (!(I2C1->SR1 & 4)); /* wait until transfer finished */
I2C1->CR1 |= 0x200; /* generate stop */
}



