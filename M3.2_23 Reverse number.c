//23. C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
main()
{
	int n,rn=0,rem;
	printf("\n\n\t Enter a number :");
	scanf("%d",&n);
	
	for(; n != 0; n/=10)
	{
		rem=n%10;
		rn=rn*10+rem;
	}
	printf("\n\n\t Reversed number : %d",rn);
}
