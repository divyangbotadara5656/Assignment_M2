//5. WAP to print factorial of given number

#include<stdio.h>
main()
{
	int a,b,c,sum=0;
	printf("\n\n\t Enter 1 number :");
	scanf("%d",&a);
		printf("\n\n\t Enter 2 number :");
	scanf("%d",&b);
		printf("\n\n\t Enter 3 number :");
	scanf("%d",&c);
	
	sum=a*b*c;
	printf("\n\n\t Factorial of given numbers is : %d * %d * %d = %d",a,b,c,sum);
	
	
}
