#include<stdio.h>
#include"head7.h"
int main()
{
	char A[5][100]={"Rahul :Dravid:bangalore:98797979:",
		"Sachin:tendulkar:mumbai:89689686",
		"sourav:ganguly:kolkata:868689698",
		"Anil:Kumble:hyderabad:86869869",
		"Vvs:laxman:Nellore:87688689"
	};
	int numusers=sizeof(A)/sizeof(A[0]);
	userData(A,numusers);
	return 0;




}

