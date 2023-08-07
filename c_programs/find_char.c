#include<stdio.h>
int find_char(char x[],char ch)
{
	for(int i=0;x[i]!='\0';i++)
	{
		if(x[i]==ch)
			return i;
	}
	return -1;

}
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


