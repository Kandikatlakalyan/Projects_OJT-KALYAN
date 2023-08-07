#include<stdio.h>
void main()
{
	int max,min,i;
	int a[6]={11,22,33,44,55,66};
	max=a[0],min=a[0];
	int length=sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<length;i++)
	{

		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("maximum element of an array:%d\n",max);
	printf("minmum element of an array:%d\n",min);
}
