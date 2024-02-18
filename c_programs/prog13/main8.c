#include<stdio.h>
#include"head8.h"
int main()
{
	int i,j,k,count=0;
	char temp[50];
	char a[50][50];
	printf("Enter the number of array elements:\n");
	scanf("%d",&count);
	printf("Enter %d names\n",count);
	__fpurge(stdin);
	for(i=0;i<count;i++)
	{
	fgets(a[i],50,stdin);
	}
	stringsort(a,count);

	printf("after sorting the string:\n");
	for(i=0;i<count;i++)
	{
		printf("%s\n ",a[i]);
	}




}
