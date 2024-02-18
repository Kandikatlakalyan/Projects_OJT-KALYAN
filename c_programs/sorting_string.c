#include<stdio.h>
#include<string.h>

int main()
{
	char data[10][50],temp[50];
	int count=0,k;
	printf("Enter the number of strings\n");
	scanf("%d",&count);//5
	__fpurge(stdin);
	for(int i=0;i<count;i++)
		fgets(data[i],50,stdin);
	printf("\n");
	printf("Entered string are::\n");
	for(int i=0;i<count;i++)
		printf("%s\n",data[i]);
	printf("\n");
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<count-1-i;j++)
		{
			k=strcmp(data[j],data[j+1]);
			if(k>0)
			{
				strcpy(temp,data[j]);//temp[j]=data[j]
				strcpy(data[j],data[j+1]);//data[i+1]=data[i]
				strcpy(data[j+1],temp);//data[j]=data[i+1]
			}
		}
	}
	printf("\n");
	printf("Sorted string is\n");
	for(int i=0;i<count;i++)
		printf("%s\n",data[i]);

}
