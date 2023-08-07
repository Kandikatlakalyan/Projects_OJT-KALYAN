#include<stdio.h>
#include"head11.h"
int main()
{
	char A[20]="c programming";
	int pos;
	pos=find_char(A,'z');

	if(pos==-1)
		printf("character is not found\n");
	else
		printf("character is  found at position :%d\n",pos);
}


