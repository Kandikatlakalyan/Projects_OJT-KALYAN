#include<stdio.h>
#include"head2.h"
void main()
{
	int arr[5]={10,20,30,40,50};
	int i,length,pos;
	printf("Already elements initialized\n");
	printf("enter the position from which position you want to print\n");
	scanf("%d",&pos);
	length=sizeof(arr)/sizeof(arr[0]);
	printf("calling array copy\n");
	arrcopy(arr,pos,length);
	int a[10][10];
	int j,n,m,sum;
	printf("Enter rows and columns\n");
	scanf("%d%d",&n,&m);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("*******calling sum of rows*************\n");
	sumofrow(a,n,m);
	printf("*******calling sum of columns*********\n");
	sumofcol(a,n,m);
	printf("*********calling sumof diagonal***********\n");
	sumofdiagonal(a,n,m);
	printf("***********calling sum of upper triangle*********\n");
	sumofuprtriangle(a,n,m);
	printf("*********calling sum of lower triangle****\n");
	sumoflwrtriangle(a,n,m);
}

