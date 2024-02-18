#include<stdio.h>
void print_binary(unsigned int n)
{
	int i=31;
	unsigned int bitmask,res;
	while(i>=0)
	{
		if((i+1)%4==0)
			printf(" ");
		bitmask=1<<i;
		res=n&bitmask;
		if(res)
			printf("1");
		else
			printf("0");
		i--;
	}
	
	
}


int main()
{
	unsigned int num=0x12345678;
	unsigned int a,b,c,d,e,f,g,h;
	print_binary(num);
	printf("\n");
	a=(num&0x0000000f)<<28;
	b=(num&0x000000f0)<<20;
	c=(num&0x00000f00)<<12;
	d=(num&0x0000f000)<<4;
	e=(num&0x000f0000)>>4;
	f=(num&0x00f00000)>>12;
	g=(num&0x0f000000)>>20;
	h=(num&0xf0000000)>>28;
	num=a|b|c|d|e|f|g|h;
	printf("\n");
	print_binary(num);
	printf("\n");
	printf("0x%x\n",num);
	printf("\n");
}
