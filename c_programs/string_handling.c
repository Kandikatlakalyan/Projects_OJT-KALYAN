#include<stdio.h>
#include<string.h>

int main()
{
	char data[100][5]={"rahul:dravid:bangalore:90909090","sachin:tendulkar:mumbai:8080808080","sourav:ganguly:kolkata:7070707070","anil:kumble:mysore:6060606","vvs:laxman:hyderabad:889900"};
	//printf("Enter a string::\n");
	//gets(data);
	printf("\n");
	char *token;
	token=strtok(data,":");
for(int i=0;i<4;i++)
{
	while(token!=NULL)
	{
		printf("Token=%s\n",token);
		token=strtok(NULL,":");
	}
	printf("\n");
}
}
