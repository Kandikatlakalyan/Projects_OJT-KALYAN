#include<stdio.h>
int change_upper(char a[20])
{
	int i,num,data;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i]=a[i]-32;
			
		}
	//	printf("%s",&a[0]);
	}
		printf("%s\n",&a[0]);



}

