// printing binary number.
#include<stdio.h>
void sign_unsign(unsigned int a)
{
//	unsigned int a;
	int bitmask;
	unsigned int res;
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
void  main()
{
	unsigned int a=115;
	unsigned int y=~(1<<5);
	sign_unsign(a);
	a=a&y;
	sign_unsign(a);
}



