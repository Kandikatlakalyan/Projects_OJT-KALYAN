#include<stdio.h>
void arrcopy(int p[],int pos,int length)
{
        int arr1[length],i;
        for(int i=pos;i<length;i++)
        {
                arr1[i]=p[i];

        }
        printf("array is copied\n");
        printf("printing after copying\n");
        for(i=pos;i<length;i++)
        {
                printf("%d  \n",arr1[i]);

        }
}

