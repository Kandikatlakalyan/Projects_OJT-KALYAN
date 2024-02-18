#include<stdio.h>
void rev_string(char s[])
{
	
	int len=0;
	for(int i=0;s[i]!='\0';i++)
		len++;
	printf("\n");
	printf("String length is::");
	printf("%d",len);
	printf("\n");	
	char temp,ch;
	for(int i=0;i<=len/2;i++)
	{
		temp=s[i];
		ch=s[len-1-i];
		s[i]=ch;
		s[len-1-i]=temp;
	}
	printf("reversed string is\n");
	puts(s);
}





int main()
{
	char data[100];
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("Entered string is\n");
	puts(data);
	rev_string(data);
	printf("\n");
}
