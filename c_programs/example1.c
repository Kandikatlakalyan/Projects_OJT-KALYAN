#include<stdio.h>

void print_binary(unsigned int n)
{
	int i=31;
	unsigned int bitmask,res;
	while(i>=0)
	{
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
	unsigned int num,bitmash,res,y;
	printf("Enter a number\n");
	scanf("%u",&num);//10--1010
	//check for 5th bit
//	y=16; bit is 0
//	y=8; bit is 1
//	y=1<<4;// y=1* (2 to the power of 4)
//	y=1<<3;
//	res=num&y;
/*	if(res)
		printf("Bit is present as 1\n");
	else
		printf("Bit is present as 0\n");*/
//	print_binary(num);decimal to binary
	// to clear a bit 
	/* making 4th(3) bit low 
	printf("Number before clearing a bit:%u\n",num);
	printf("Number in binary form\n");
	print_binary(num);
	y=~(1<<3);
	num=num&y;
	printf("Number after clearing is : %u\n",num);
	printf("Number in binary form:\n")
	print_binary(num);*/
/*	 to set a bit high
	 10-->1010 should be 1110 
	therefore 3rd bit should be high -->y=1<<2*/
/*	printf("Number before setting it high:%u\n",num);
	printf("Number in binary form:\n");
	print_binary(num);
	printf("\n");
	y=1<<2;
	num=num|y;
	printf("Number after stting it high:%u\n",num);
	printf("Number in binary form:\n");
	print_binary(num);
	printf("\n");*/
/*	to toggle bits
	10-->1010
	after toggle 2 bits -->1100
	the bits to be toggled keep it high*/
	
	printf("Number before toggling:%u\n",num);
	printf("Number in binary form\n");
	print_binary(num);
	printf("\n");
	y=(1<<1)|(1<<2);
	num=num^y;
	printf("Number after toggling:%u\n",num);
	printf("Number in binary form\n");
	print_binary(num);
	printf("\n");
	return 0;
}
