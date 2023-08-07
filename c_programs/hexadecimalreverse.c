#include<stdio.h>
void main()
{
	unsigned int num=0x12345678;
	unsigned int a,b,c,d;
	a=((num&0x000000ff) << 24);
	b=((num&0x0000ff00) << 8);
	c=((num&0x00ff0000) >> 8);
	d=((num&0xff000000) >> 24);
	num=a|b|c|d;
	printf("num = 0x%x\n",num);


}
