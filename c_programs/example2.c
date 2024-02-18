#include<stdio.h>


int main()
{
	int num1,num2,num3,num4;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	//To print greatest of three numbers
	num4=(num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);
	printf("Greatest = %d\n",num4);
	return 0;
}
