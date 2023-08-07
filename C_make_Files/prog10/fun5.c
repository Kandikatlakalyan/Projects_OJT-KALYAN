#include<stdio.h>
void bitmask(unsigned int a)
{
//	unsigned int a;
	unsigned int bitmask;
	unsigned res;
	int i=31;
	while(i>=0)
	{
		bitmask=1<<i;
		res=a&bitmask;
		if(res==0)
			printf("0");
		else
			printf("1");
		i--;
	}
	printf("\n");
}
