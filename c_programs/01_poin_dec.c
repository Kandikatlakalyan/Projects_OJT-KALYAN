#include<stdio.h>

int main()
{
	int m=10,n,o;
	int *z;
	z=&m;
	printf("Value of m is :: %d\n",m);
	printf("Value of m is using pointer:: %d\n",*z);
	printf("Address of m::%p\n",&m);
	printf("Pointer Address pointed by pointer *z::%p\n",z);
	printf("Address of n::%p\n",&n);
	printf("Address of o::%p\n",&o);
	printf("Address of z::%p\n",&z);
	
}
