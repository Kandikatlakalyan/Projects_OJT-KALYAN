#include<string.h>
void stringsort(char *a[50],int count)
{
int i,j,k;
char temp[50];
for(i=0;i<count-1;i++)
	{
		for(j=0;j<count-1-i;j++)
		{
			k=strcmp(a[j],a[j+1]);
			if(k>0)
					{
			strcpy(temp,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],temp);}
		}
	}
}
