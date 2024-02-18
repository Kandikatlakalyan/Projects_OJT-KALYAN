#include<stdio.h>
int main()
{
	int m=300,*int_ptr;
	float fx=300.600006,*float_ptr;
	char cht='z',*char_ptr;
	int_ptr=&m;
	float_ptr=&fx;
	char_ptr=&cht;
	printf("Using & operator:\n");
	printf("--------------------------------\n");
	printf("Address of m::%p\n",&m);
	printf("Address of fx::%p\n",&fx);
	printf("Address of cht::%p\n",&cht);
	printf("\n");
	printf("Using & and * operator:\n");
	printf("---------------------------------\n");
	printf("Value at the address of m::%d\n",m);
	printf("Value at the address of fx::%f\n",fx);
	printf("Value at the address of cht::%c\n",cht);
	printf("\n");
	printf("Using only pointer variable:\n");
	printf("----------------------------------\n");
	printf("Address of m = %p\n",int_ptr);
	printf("Address of fx = %p\n",float_ptr);
	printf("Adress of cht = %p\n",char_ptr);
	printf("\n");
	printf("Using only ponter operator:\n");
	printf("-----------------------------------\n");
	printf("Value at the address of m::%d\n",*int_ptr);
	printf("Value at the address of fx::%f\n",*float_ptr);
	printf("Value at the address of cht::%c\n",*char_ptr);
}
