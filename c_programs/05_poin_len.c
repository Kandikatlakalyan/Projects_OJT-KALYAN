#include<stdio.h>
int length(char *ptr_data);
void string_length()
{
	char data[100];
	int l;
	printf("Input a string:\n");
	fgets(data,100,stdin);
	l=length(data);
	printf("The length of the given string %s is %d:",data,l);
}

int length(char *ptr_data)
{
	int len=0;
	for(int i=0;*(ptr_data+i)!='\0';i++)
		{
			len++;	
		}
	return len;
}



int main()
{
	string_length();
}
