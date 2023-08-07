#include<stdio.h>
int e(int x,int n)
{
	int r,res;
	if(n==0)
		return 1;
	else
	{
		res=e(x,n-1);
		return r*(1+x/n);
	}
}
int main()
{
	int x=4,n=4,sum;
	sum=e(x,n);
	printf("%d ",sum);
}
