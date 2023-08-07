#include<stdio.h>
void main()
{
        int a[]={3,6,8,8,10,12,15,15,15,20};
        int n,j,count=0;
        int len=sizeof(a)/sizeof(a[0]);
	int last=0;
        //int max=a[len-1];
        for(int i=0;i<len-1;i++)
        {
		if(a[i]==a[i+1]&&last!=a[i])
		{
	
			for(j=i+2;i<len-1;j++)
			{
				if(a[i]!=a[j])
				{
					printf("%d     %d\n",a[i],j-i);
					break;
				}
			}


	}
		last=a[i];
}
}
