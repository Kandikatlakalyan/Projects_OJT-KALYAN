#include<stdio.h>
void main()
{
	char str[20];
	int v_count=0,c_count=0,i,n;
	printf("enter the string\n:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	printf("the vowels are:%d\n",v_count);

	printf("the consonants are:%d\n",c_count);
	
}


