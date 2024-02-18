#include<stdio.h>

void arr_copy(int p[],int position,int length)
{
	int b[100]={0};
	position=position-1;
	for(int i=position,j=0;i<length;i++)
	{
		b[j]=p[i];
		j++;
	}
	for(int j=0;b[j]!=0;j++)
		printf("%d\t",b[j]);
}






int main()
{
	int n,pos;
	printf("Enter the array size\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("\n");
	printf("Enter the position of array to be copied\n");
	scanf("%d",&pos);
	arr_copy(array,pos,n);
	printf("\n");
}
