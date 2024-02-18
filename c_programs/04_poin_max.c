#include<stdio.h>

int main()
{
	int a,b;
	int *ptr_a,*ptr_b;
	printf("Input the first number\n");
	scanf("%d",&a);
	printf("Input the second number\n");
	scanf("%d",&b);
	printf("\n");
	printf("\n");
	ptr_a=&a;
	ptr_b=&b;
	if(*ptr_a>*ptr_b)
		printf("%d is the maximum\n",*ptr_a);
	else
		printf("%d is the maximum\n",*ptr_b);
	printf("\n");
}
