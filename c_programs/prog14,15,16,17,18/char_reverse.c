#include<stdio.h>
#include<string.h>
void char_reverse(char a[])
{
	char *p;
	p=a;
	int n,i,j,x,length;
	n=strlen(a);
	length=n-1;
	for(i=0;i<(n/2);i++)
	{
		for(j=length;j>=length;j--)
		{
			x=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=x;
		}
		length--;
		//printf("%s\n",p);

	}
	printf("after reverse string is :%s\n",p);


}
