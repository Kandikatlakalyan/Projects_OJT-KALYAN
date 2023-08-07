void sortnum(int a[5])
{
	int i,j,temp;
for(i=0;i<4;i++)
	{
		for(j=0;j<5-1-i;j++)
		{
			if(a[j]>a[j+1])
					{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;}
		}
	}
}
