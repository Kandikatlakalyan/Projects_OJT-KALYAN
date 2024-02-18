#include<stdio.h>
int main()
{
	char data[100];
	printf("Enter the string \n");
	gets(data);
	printf("\n");
	printf("Entered string is \n");
	puts(data);
	printf("\n");
	for(int i=0;data[i];i++)
	{
		if((data[i]>=97&&data[i]<=122)||data[i]==32)
		{
		if(data[i]==' ')
			printf(" ");
		else	
			printf("%c",data[i]-32);
		}
	}
	printf("\n");
	return 0;
}
