#include<stdio.h>
#include"first.h"
int main()
{
	int cs;
	printf("Program to be executed\n");
	printf("Select the program option to be executed from 1-6\n");
	scanf("%d",&cs);
	
	switch(cs)
		{
			case 1:
				{
					add();
					break;
				}
			case 2:
				{
					max();
					break;
				}
			case 3:
				{
					avg();
					break;
				}
			case 4:
				{
					max_three();
					break;
				}
			case 5:
				{
					reimbruse();
					break;
				}
			case 6:
				{
					evodd();
					break;
				}
			default:
				{
					printf("Invalid options\n");
				}


		}
	return 0;	
}
