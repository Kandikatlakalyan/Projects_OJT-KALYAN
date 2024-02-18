//Program to find a character in a given string
#include<stdio.h>
#include"find_char_header.h"
int main()
{
	char data[100],ch;
	int position;
	printf("Enter a string\n");
	fgets(data,100,stdin);
	printf("\n");
	printf("Entered string is\n");
	fputs(data,stdout);
	printf("\n");
	printf("Enter the character to be searched\n");
	scanf("%c",&ch);
	printf("\n");
	position=pos_findchar(data,ch);
	printf("\n");
	printf("Character is present at::%d\n",position);
	printf("\n");
	return 0;
}
