#include<stdio.h>
int main()
{
	int a,b,c;
	int *ptr1,*ptr2,*ptr3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("value of a = %d\n",a);//a=2
	printf("value of b = %d\n",b);//b=3
	printf("value of c = %d\n",c);//c=4
	ptr1=&a;
	ptr2=&b;
	ptr3=&c;
	printf("\n");
	printf("value at a using pointers::%d\n",*ptr1);
	printf("value at b using pointers::%d\n",*ptr2);
	printf("value at c using pointers::%d\n",*ptr3);
	c=*ptr1;
	b=*ptr2;
	a=*ptr3;
	printf("value at a,b and c ::a=b,b=c,c=a\n");
	printf("value at a using pointers::%d\n",a);//a=3
	printf("value at b using pointers::%d\n",b);//b=4
	printf("value at c using pointers::%d\n",c);//c=2
}
