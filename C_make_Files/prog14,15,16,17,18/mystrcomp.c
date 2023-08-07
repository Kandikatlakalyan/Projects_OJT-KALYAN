#include<stdio.h>
int mystrcomp(char a[10], char b[10])
{
	char *p1,*p2;
	p1=a;
	p2=b;
	int n,m,i,j,flag=0;
//	n=strlen(a);
//	m=strlen(b);
	while(*p1!='\0' && *p2!='\0')
	{
		if(*p1!=*p2)
			flag=1;
	p1++;
	p2++;


	}
	if(*p1!='\0' || *p2!='\0')
		return 1;
	if(flag==0)
		return 0;
	else
		return 1;




}

