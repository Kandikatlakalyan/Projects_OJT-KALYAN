#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5},sum=0,i;
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum of the numbers is:%d:",sum);
}

