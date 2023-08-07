#include<stdio.h>
void maximum(int a[10])
{
//	int arr[10]={10,20,30,40,50};
	int *ptr;
	int num,max,i;
	ptr=&a[0];
	max=*ptr;
	for(i=0;i<10;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
	}
	printf("max=%d\n",max);
}

void main()
{ 
	int arr[10]={10,20,30,40,50};
	maximum(arr);
}


