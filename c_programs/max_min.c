#include<stdio.h>
int main()
{
	int n,max_val,min_val;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elemnts\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	min_val=max_val=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max_val)
			max_val=arr[i];

		if(arr[i]<min_val)
			min_val=arr[i];
	}
	printf("Maximum value is:: %d\n",max_val);	
	printf("Minimum value is:: %d\n",min_val);
	printf("\n");
	return 0;	
}
