#include<stdio.h>
int main()
{
	int a,b;
	int *ptr_a,*ptr_b;
	printf("Input the first number\n");
	scanf("%d",&a);
	printf("Input the second number\n");
	scanf("%d",&b);
	ptr_a=&a;
	ptr_b=&b;
	printf("The sum of the entered number is :: %d\n",*ptr_a+*ptr_b);
	
}
