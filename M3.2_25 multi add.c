//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int i;
	
	for(i=0;i<=30;i++)
	{
		printf(" (%d * %d)+",i,i,i,i);
	}
	printf(".............+(n*n)");
}
