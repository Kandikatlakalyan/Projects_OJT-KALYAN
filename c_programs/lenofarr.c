#include<stdio.h>
void main()
{
	int len=0,i,n;
	char str[20];
	//int length=sizeof(a)/sizeof(a[0]);
	printf("Enter the string:");
	gets(str);

	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}

	printf("length of the string:%s\n",&str);
	printf("length of the string:%d\n",len);
}
