#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
		sum=sum+arr[i];
	printf("Sum of array element ::%d\n",sum);
	printf("\n");
	return 0;
}
