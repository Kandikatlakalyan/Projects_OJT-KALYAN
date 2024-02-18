#include<stdio.h>
void checkbit(int num,int n)
{
	int num2,num3;
	num2=1<<n;
	num3=num&num2;
	if(num3==0)
		printf("off");
	else
		printf("on");
}
