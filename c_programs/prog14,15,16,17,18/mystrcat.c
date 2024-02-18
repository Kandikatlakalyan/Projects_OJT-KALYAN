#include<stdio.h>
#include<string.h>
void mystrcat(char a[], char b[])
{
	char *p1,*p2;
	p1=a;
	p2=b;
	int n,i,m,j;
	n=strlen(a);
//	printf("%d\n%d\n",n,m);
	for(i=0,j=0;*(p2+j)!='\0';j++,i++)
	{
		*(p1+n+i)=*(p2+j);
	}
	*(p1+n+i)='\0';
	printf("after concatened string is: %s\n",a);

}
