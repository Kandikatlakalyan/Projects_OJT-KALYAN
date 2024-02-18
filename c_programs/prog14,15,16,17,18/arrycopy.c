#include<stdio.h>
void mystrcopy(char a[],char b[])
{
	char *p1,*p2;
	p1=a;
	p2=b;
	int i;
	for(i=0;*(p1+i)!='\0';i++)
	{
		*(p2+i)=*(p1+i);
	}
	*(p2+i)='\0';
	printf("copied string is: %s\n",p2);

}
