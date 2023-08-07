#include<stdio.h>
void toggle(int num)
{
	int num2,res;
	res=(1<<3)|(1<<4)|(1<<5);
	printf("%d",res);
	num2=num^res;
	printf("%d",num2);
}

void main()
{
	int i,num,num2,res;
	printf("Enter a num");
	scanf("%d",&num);
	toggle(num);

	
}





