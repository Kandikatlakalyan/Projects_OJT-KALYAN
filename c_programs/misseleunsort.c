#include<stdio.h>
void main()
{
	int a[11]={3,8,5,4,9,12,1,6,11,2,10};
	static int b[12];
	int n;
	int len=sizeof(a)/sizeof(a[0]);
	int max=a[len-1];
	for(int i=0;i<max+1;i++)
	{
		int r=a[i];
		b[r]=1;
	}

	for(int j=1;j<12;j++)
	{
		if(b[j]==0)
			printf("%d ",j);
	}
}
