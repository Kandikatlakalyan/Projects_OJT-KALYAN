#include<stdio.h>
#include<string.h>
void stringsort(int a[50][50],int count)
{
int i,j;
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

int main()
{
	int i,j,k,count=0;
	char temp[50];
	char a[50][50];
	printf("Enter the number of array elements:\n");
	scanf("%d",&count);
	printf("Enter %d names\n",count);
	__fpurge(stdin);
	for(i=0;i<count;i++)
	{
	//fgets(a[i],50,stdin);
	
	}
	stringsort(a,count);
	
	printf("after sorting the string:\n");
	for(i=0;i<count;i++)
	{
		printf("%s\n ",a[i]);
	}




}
