#include<stdio.h>
#include"head3.h"
int main()
{
	int i,j,temp,n;
	int a[5];
	printf("Enter the array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	sortnum(a);
	
	printf("after sorting:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}




}
