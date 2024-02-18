#include"stm32f4xx.h"
// PC0-PC7 --> LCD D0-D7
// PB5 for LCD --> RS
//PB6 for LCD --> R/W
//PB7 for LCD EN

#define			RS			(0x20)//PB5-->for register select
#define			RW			(0x40)//PB6-->for read/write
#define			EN			(0x80)//PB7-->for EN

void ports_init(void);
void LCD_init(void);
void LCD_data(char data);
void LCD_command(unsigned char command);
void LCD_data(char data);
void delay(int n);

int main()
{
	LCD_init();//Initialize LCD controller

	while(1)
	{
		LCD_data('h');
		LCD_data('e');
		LCD_data('l');
		LCD_data('l');
		LCD_data('0');
		delay(1000);

		LCD_command(1);
		delay(500);
	}

}

void ports_init(void)
{
	RCC->AHB1ENR |= 0x06;// Enable B and C ports
	GPIOB->MODER |=0x00005400;//Set pin in output mode
	GPIOB->BSRR = 0X00C00000;// TURN OFF EN AND RW

	GPIOC->MODER |= 0x00005555;//SET PINS IN OUTPUT MODE -> C0-C7(D0-D7)
}
void LCD_init(void)
{
	ports_init();
	delay(30);
	LCD_command(0x30);
	delay(10);
	LCD_command(0x30);
	delay(1);
	LCD_command(0x30);//set 8-bit data one line

	LCD_command(0x38);//set 8-bit data two line
	LCD_command(0x06);//move cursor right after each char
	LCD_command(0x01);//clear screen,move cursor to home
	LCD_command(0x0F);//turn on display,cursor blinking

}

void LCD_command(unsigned char command)
{
	GPIOB->BSRR = (RS | RW)<<16;//RS=0 AND R/W=0
	GPIOC->ODR = command;//PUT COMMAND ON DATA BUS
	GPIOB->BSRR = EN;//PULSE E HIGH
	delay(0);
	GPIOB->BSRR = EN<<16;//CLEAR ENABLE->LOW

	if(command < 4)
		delay(2);// COMMAND 1 AND 2 NEEDS UP TO 1.64ms
	else
		delay(1);// ALL OTHERS 40um
}
void LCD_data(char data)
{
	GPIOB->BSRR = RS;//RS=1
	GPIOB->BSRR = RW<<16;//R/w=0
	GPIOC->ODR = data;//put data on data bus
	GPIOB->BSRR = EN;// pulse E high
	delay(0);
	GPIOB->BSRR = EN<<16;//clear E->low


	delay(1);
}

/* delay n milliseconds(16 MHz CPU clock)*/
void delay(int n)
{
	for(;n>0;n--)
		for(int i=0;i<3000;i++);
}
