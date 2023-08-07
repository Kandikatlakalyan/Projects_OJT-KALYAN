#include<stdio.h>
void swap()
{
	int x=32,y=45;
	printf("before swap x=%d and y=%d\n",x,y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("after swap x=%d and y=%d\n",x,y);
}
void  main()
{
	swap();
}



