#include<stdio.h>

void remove_char(char *ptr,char ch)
{
	int i,j;
	for(i=0,j=0;*(ptr+i)!='\0';i++)
	{
		if(*(ptr+i)!=ch)
		{
			*(ptr+(j++))=*(ptr+i);
		}
	}
	*(ptr+j)='\0';
	printf("String after removing the character %c is %s\n",ch,ptr);
	printf("\n");
}
