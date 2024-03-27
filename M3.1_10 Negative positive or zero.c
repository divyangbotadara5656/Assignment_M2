//10.WAP to check whether a number is negative, positive or zero

#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t Enter any value :");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("\n\n\t The given number is negative");
	}
	else if(a==0)
	{
		printf("\n\n\t The given number is 0");
	}
	else
	{
		printf("\n\n\t The given number is positive");
	}
}
