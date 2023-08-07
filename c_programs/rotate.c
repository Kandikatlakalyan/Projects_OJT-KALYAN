#include<stdio.h>
void rotate(int *x,int *y,int *z)
{
	int d;
	 d=*z;
	*z=*x;
	*x=*y;
	*y=d;

}
void main()
{
	int a=10,b=20,c=30,d;
	printf("before rotation %d %d %d\n",a,b,c);
	rotate(&a,&b,&c);
	printf("after rotation %d %d %d\n",a,b,c);
}
