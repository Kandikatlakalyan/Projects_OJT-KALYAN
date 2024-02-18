#include<stdio.h>
int main()
{
	int v_count=0,c_count=0;
	char data[100];
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("\n");
	printf("Entered string is::\n");
	puts(data);	
	printf("\n");
	printf("\n");
	for(int i=0;data[i];i++)
	{
		if(data[i]=='a'||data[i]=='e'||data[i]=='i'||data[i]=='o'||data[i]=='u')
			v_count++;
		else
			c_count++;
	}
	
	printf("\n");
	printf("\n");
	printf("Number of VOWELS::%d\n",v_count);
	
	printf("\n");
	printf("\n");
	printf("Number of CONSONANTS::%d\n",c_count);
	return 0;
}
