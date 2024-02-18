#include<stdio.h>
void matrix_sum_fun(int matrix[][],int n,int m)
{	
	int sum_row=0;
	int sum_col=0;
	int sum_diag=0;
	int sum_antidiag=0;
	int sum_abvdiag=0;
	int sum_beldiag=0;
	int i,j,temp;
	temp=m-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum_row=sum_row+matrix[i][j];
			sum_col=sum_col+matrix[j][i];
			if(i==j)
			{
				sum_diag=sum_diag+matrix[i][j];
			}
			if(i+j==temp)
			{
				sum_antidiag=sum_antidiag+matrix[i][j];
			}
			if(j>i)
			{
				sum_abvdiag=sum_abvdiag+matrix[i][j];
			}			
			if(i>j)
			{
				sum_beldiag=sum_beldiag+matrix[i][j];
			}
		}

	
	printf("Sum of row number :: %d is %d\n",i+1,sum_row);
	printf("Sum of column number:: %d is %d\n",i+1,sum_col);
	sum_row=0;
	sum_col=0;
	printf("\n");
	}
	printf("\n");
	printf("Sum of diagonal matrix::%d\n",sum_diag);
	printf("Sum of anti diagonal matrix::%d\n",sum_antidiag);
	printf("Sum of above diagonal matrix::%d\n",sum_abvdiag);
	printf("Sum of below diagonal matrix::%d\n",sum_beldiag);
}
