#include<stdio.h>
#include<string.h>
struct date
{
char day[10];
int dd;
int mm;
int yyyy;
};
void struct_func1(struct date d1)
{
	printf("%s-%d-%d\n",d1.day,d1.mm,d1.yyyy);
}
void struct_func2(struct date d2)
{
	printf("%d-%d-%d\n",d2.dd,d2.mm,d2.yyyy);
}
int struct_comp(struct date d1,struct date d2)
{
	return (365-((d1.mm-d2.mm)*30));
}

int main()
{
	int days=0;
	struct date d1;
		strcpy(d1.day,"MON");
		d1.mm=8;
		d1.yyyy=2023;
	printf("Enter the date\n");
	struct date d2;
		d2.dd=27;
		d2.mm=6;
		d2.yyyy=2023;

	struct_func1(d1);
	struct_func2(d2);
	days=struct_comp(d1,d2);
	printf("number of days in between the months::%d\n",days);
}

