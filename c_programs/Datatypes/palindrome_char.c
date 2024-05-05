#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("Enter the name: ");
	gets(name);
	int len=strlen(name);
	int i,count=0;
	for(i=0;i<len/2;i++)
	{
		if(name[i]!=name[len-i-1])
		{
			count++;
			break;
		}
	}
	if(count)
		printf("Not palindrome");
	else
		printf("palindrome");
}
