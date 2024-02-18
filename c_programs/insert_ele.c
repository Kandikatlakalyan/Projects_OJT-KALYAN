#include<stdio.h>
// cprogram to insert an element in an array
void array_insert_ele(int *ptr,int n,int pos)
{
	int ele;
	printf("Enter the element to be inserted\n");
	scanf("%d",&ele);
	n=n+1;
	pos=pos-1;
	for(int i=n-1;i>=pos;i--)
	{
		*(ptr+i)=*(ptr+i-1);
	}
	*(ptr+pos)=ele;
	printf("Array after inserting::\n");
	for(int i=0;i<n;i++)
		printf("%d\t",*(ptr+i));
	printf("\n");
}
