#include<stdio.h>
#include"array_headers.h"

int main()
{

	int n,ele,pos,count=0;
	char data[100],ch;
	printf("Enter the array size::\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

//	array_insert_ele(a,n,pos);
//	printf("\n");
//	array_delete_ele(a,n);
	printf("\n");
//	count=highest_freq_ele(a,n);
//	printf("Highest frequency element in the array is :: %d\n",count);
	printf("\n");
	remove_char(data,ch);
}
