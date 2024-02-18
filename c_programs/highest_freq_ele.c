#include<stdio.h>

int highest_freq_ele(int *ptr,int n)
{
	printf("To print highest frequency element in the array\n");
	printf("\n");
	printf("\n");
	int count=0,maxcount=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(*(ptr+i)==*(ptr+j))
				count++;
		}
		if(count>maxcount)
			maxcount=*(ptr+i);
	}
	return maxcount;
}
