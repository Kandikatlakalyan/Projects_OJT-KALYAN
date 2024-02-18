#include<stdio.h>

int pos_findchar(char *ptrch,char find_ch)
{
         for(int i=0;*(ptrch+i)!='\0';i++)
         {
                 if(*(ptrch+i)==find_ch)
                         return (i+1);         
	 }
} 

