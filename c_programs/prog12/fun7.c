#include<stdio.h>
#include<string.h>
void userData(char p[5][100],int numusers)
{
	char* token;
	for(int i=0;i<numusers;i++)
	{
		token=strtok(p[i],":");
		printf("Name:%s\n",token);
		token=strtok(NULL,":");
		printf("Surname:%s\n",token);
		token=strtok(NULL,":");
		printf("City:%s\n",token);
		token=strtok(NULL,":");
		printf("phone:%s\n",token);
		printf("\n");
	}




}
