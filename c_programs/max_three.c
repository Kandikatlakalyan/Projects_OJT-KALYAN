#include<stdio.h>
void max_three(void)
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c)
		printf("Greatest is %d\n",a);
	if(b>=a&&b>=c)
		printf("Greatest is %d\n",b);
	if(c>=a&&c>=b)
		printf("Greatest is %d\n",c);
}

