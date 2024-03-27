//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... +1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int i,n,sum;
	
	for(i=1;1<n;++i)
	{
		printf("\n\n\t Enter any number :");
		scanf("%d",&n);

		printf("(%d)+(%d + %d)+(%d + %d +%d)",n,n,i+1,n,i+1,i+2);
		printf("........+n");

	}
}
