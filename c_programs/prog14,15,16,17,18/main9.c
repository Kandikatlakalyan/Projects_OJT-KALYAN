#include<stdio.h>
#include"head.h"
void main()
{
	char str[20];
	printf("Enter a first string\n");
	gets(str);
	char str1[20];
	printf("Enter the second string\n");
	gets(str1);
	char *ptr;
	ptr=str;
	getcharlen(str);
	char_reverse(str);
	mystrcopy(str,str1);
	mystrcat(str,str1);
	int k=mystrcomp(str,str1);
	if(k==0)
		printf("both strings are equal");
	else
		printf("both strings are not equal");

}
