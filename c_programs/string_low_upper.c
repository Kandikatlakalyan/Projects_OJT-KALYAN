#include<stdio.h>

void string_upper(char data[])
{
	for(int i=0;data[i]!='\0';i++)
	{
		if((data[i]>=97&&data[i]<=122)||data[i]==32||(data[i]>=65&&data[i]<=90))
		{
			if(data[i]==' ')
				printf(" ");
			else if(data[i]>=97&&data[i]<=122)
					printf("%c",data[i]-32);
				else
					printf("%c",data[i]+32);
		}
	}
}

void string_lower(char data[])
{
	for(int i=0;data[i]!='\0';i++)
	{
		if((data[i]>=97&&data[i]<=122)||data[i]==32)
		{
			if(data[i]==' ')
				printf(" ");
			else
				printf("%c",data[i]-32);
			
		}
	}
}
int main()
{
	char data1[100],data2[100],data3[100];
	printf("Enter a string in lower case\n");
	gets(data1);
	printf("\n");
	
	printf("Enter a string in upper case\n");
	gets(data2);
	printf("\n");

	printf("Enter a string in both lower and upper case\n");
	gets(data3);
	printf("\n");
	printf("\n");
	
	printf("Entered string in lower case\n");
	puts(data1);
	printf("String in upper case\n");
	string_upper(data1);
	printf("\n");
	printf("\n");
	printf("Entered string in upper case\n");
	puts(data2);
	printf("\n");
	printf("string in lower case\n");
	string_upper(data2);
	printf("\n");
	printf("\n");
	printf("Entered string in opposite form\n");
	puts(data3);
	printf("\n");
	printf("String  converted to opposite form\n");
	//string_lower(data3);
	string_upper(data3);
	printf("\n");
	return 0;
}
