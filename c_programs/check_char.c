#include<stdio.h>
int main()
{
	char data[100],ch;
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("Entered String is::\n");
	puts(data);
	printf("\n");
	printf("Enter the character to be checked ::\n");
	scanf("%c",&ch);
	for(int i=0;data[i]!='\0';i++)
	{
		if(data[i]==ch)
		{
			printf("The character %c is present at %d \n",ch,i);
		}
	}
	return 0;
}
