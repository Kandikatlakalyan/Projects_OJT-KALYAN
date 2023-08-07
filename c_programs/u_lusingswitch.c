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

int change_lower(char a[20])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i] >= 65 && a[i] <= 90)
		{
			a[i]=a[i]+32;
			
		}
	//	printf("%s",&a[0]);
	}
		printf("%s\n",&a[0]);
}
int swap_char(char a[20])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i]=a[i]-32;
			
		}
		else if(a[i] >= 65 && a[i] <= 90)
		{
			a[i]=a[i]+32;
			
 		}
	//	printf("%s\n",&a[0]);
	}
		printf("%s\n",&a[0]);
}

int main()
{
	char A[20]="KALYAN";
	int choice;
	printf("Enter the choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			change_upper(A);
			break;
		case 2:
			change_lower(A);
			break;
		case 3:
			swap_char(A);
			break;


	}
}
