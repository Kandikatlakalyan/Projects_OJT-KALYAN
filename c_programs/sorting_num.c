#include<stdio.h>


int main()
{
	int n,temp;
	printf("Enter the array size::\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the array elements::\n");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\n");
	printf("Array elements before sorting::\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}

	printf("\n");
	printf("After sorting\n");
	for(int i=0;i<n;i++)
		printf("%d\t",array[i]);
	printf("\n");
}
