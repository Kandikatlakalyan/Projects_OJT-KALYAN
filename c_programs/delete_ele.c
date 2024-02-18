#include<stdio.h>
// c program to delete an element from an array
void array_delete_ele(int *ptr,int n)
{
	int ele;
	printf("Enter the element to be deleted\n");
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(*(ptr+i)==ele)
		{
			for(int j=i;j<n;j++)
			{
				*(ptr+j)=*(ptr+j+1);
			}
		}
	}
	for(int i=0;i<n-1;i++)
	{
		printf("%d\t",*(ptr+i));
	}
printf("\n");
}
