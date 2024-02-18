#include<stdio.h>
#include"matrix_sum_fun.h"

int main()
{
	int m,n;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	printf("Enter the number of columns\n");
	scanf("%d",&m);
	printf("Enter the array elements\n");
	
	int matrix[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			scanf("%d",&matrix[i][j]);
	}
	
	matrix_sum_fun(matrix,int n,int m);
	return 0;
	
}
