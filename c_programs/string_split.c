#include<stdio.h>
#include<string.h>
int main()
{
char data[50]={"rahul:dravid:bangalore:9090090"};
char *token;
	

	while(token!NULL)
	{
		token=strtok(data,":");
		printf("Token=%s",token);
		
	}

}
