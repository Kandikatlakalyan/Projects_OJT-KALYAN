#include<stdio.h>
void sumofrow(int a[10][10],int p,int q)
{
        int sum,m,n,j,i;

        for(i=0;i<p;i++)
        {
                sum=0;
                for(j=0;j<q;j++)
                {
                        sum=sum+a[i][j];
                }
                printf("sum of elements in a row is :%d\n",sum);
        }



}

