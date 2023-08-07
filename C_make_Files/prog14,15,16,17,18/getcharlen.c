#include<stdio.h>
void getcharlen(char a[20])
{
	int len=0;
	char *ptr;
	ptr=a;
	for(int i=0;*(ptr+i)!='\0';i++)
	{
		len++;

	}
	printf("Entered string length is :%d\n",len);


}
