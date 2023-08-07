#include<stdio.h>
void sumofdiagonal(int a[10][10],int p,int q)
{
        if(p==q)
        {
        int sum=0,m,n,j,i,sum1=0;

        for(i=0;i<p;i++)
        {
                sum=sum+a[i][i];
                sum1=sum1+a[i][p-i-1];
        }
        printf("sum ofdiagonal elements in a matrix is :%d\n",sum);
        printf("sum of anti diagonal elements in a matrix :%d\n",sum);
        }
        else
                printf("can't perform sum of diagonal elements\n");
}

