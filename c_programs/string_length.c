#include<stdio.h>
#include<string.h>
int main()
{
	int len=0,len1=0;
	char data[100];
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("Entered String is\n");
	puts(data);
	for(int i=0;data[i]!='\0';i++)
		len++;
	printf("String length without built-in function:: %d\n",len);
	printf("\n");
	len1=strlen(data);
	printf("String length using built-in function:: %d\n",len1);
	return 0;

}
