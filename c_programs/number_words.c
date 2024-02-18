#include<stdio.h>
int main()
{
	int numb,rev_num=0,rem,remaind;
	printf("Enter the number to be converted into word\n");
	scanf("%d",&numb);
	
	while(numb)
	{
		rem=numb%10;
		rev_num=rev_num*10+rem;
		numb=numb/10;
	}
	while(rev_num)
	{
		remaind=rev_num%10;
	
		switch(remaind)
		{
			case 1:
				printf("ONE\t");
				break;	
			case 2:
				printf("TWO\t");
				break;	
			case 3:
				printf("THREE\t");
				break;	
			case 4:
				printf("FOUR\t");
				break;	
			case 5:
				printf("FIVE\t");
				break;	
			case 6:
				printf("SIX\t");
				break;	
			case 7:
				printf("SEVEN\t");
				break;	
			case 8:
				printf("EIGHT\t");
				break;	
			case 9:
				printf("NINE\t");
			break;		
		}
		rev_num=rev_num/10;
	}
	printf("\n");
	printf("\n");
	return 0;
}
