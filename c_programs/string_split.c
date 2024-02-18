#include<stdio.h>

int main()
{
	char data[100];
	char *data_ptr;
	printf("Enter a string\n");
	gets(data);
	printf("\n");
	printf("\n");
	printf("Entered string is::\n");
	puts(data);
	printf("\n");
	printf("\n");
	data_ptr=data;//data==&data[0]
	for(int i=0;*(data_ptr+i)!='\0';i++)
	{
		if(*(data_ptr+i)==' ')
			*(data_ptr+i)=',';
	}
	printf("String after split is :: %s\n",(data_ptr));	
	printf("\n");
	printf("\n");
	return 0;
}
