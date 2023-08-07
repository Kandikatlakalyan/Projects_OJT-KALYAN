#include<stdio.h>
void minimum(int a[10])
{
//	int arr[10]={10,20,30,40,50};
	int *ptr;
	int num,min,i;
	ptr=&a[0];
	min=*ptr;
	//printf("%d %d",min,*ptr);
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)<min)
			min=*(ptr+i);
	}
	printf("min=%d\n",min);
}

