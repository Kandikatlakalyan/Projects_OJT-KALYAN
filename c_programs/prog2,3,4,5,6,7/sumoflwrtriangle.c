#include<stdio.h>
void sumoflwrtriangle(int a[10][10],int p,int q)
{
        int sum=0,m,n,j,i;
        
        for(i=0;i<p;i++)
        {
                for(j=0;j<q;j++)
                {
                if(i+j>p-1)
                        sum=sum+a[i][j];
                }
              
        }
          printf("sum of lower triangle matrix is :%d\n",sum);
}

