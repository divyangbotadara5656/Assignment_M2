//4. WAP to find factorial using recursion
#include<stdio.h>
main()
{
	int mnum(int n);
	int n;
	
	printf("\n\n\t Enter a positive interger :");
	scanf("%d",&n);
	
	printf("\n\n\t Factorial of %d = %d",n,mnum(n));
	
	if(n>=1)
	
	n*mnum(n-1);
	
	else
	printf("\n\n\t Exit.....");
	
	
}
