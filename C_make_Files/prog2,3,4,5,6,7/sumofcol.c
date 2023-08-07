#include<stdio.h>
void sumofcol(int a[10][10],int p,int q)
{
        int sum,m,n,j,i;

        for(i=0;i<p;i++)
        {
                sum=0;
                for(j=0;j<q;j++)
                {
                        sum=sum+a[j][i];
                }
                printf("sum of elements in a column is :%d\n",sum);
        }
}

