#include<stdio.h>
void rev_string(char *ptrch)
{
	
	int len=0;
	for(int i=0;*(ptrch+i)!='\0';i++)
		len++;
	printf("\n");
	printf("String length is::");
	printf("%d",len);
	printf("\n");	
	char temp,ch;
	for(int i=0;i<=len/2;i++)
	{
		temp=*(ptrch+i);
		ch=*(ptrch+len-i-1);//s[len-1-i];
		*(ptrch+i)=ch;
		*(ptrch+len-i-1)=temp;
	}
	printf("reversed string is\n");
	printf("%s\n",ptrch);
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
