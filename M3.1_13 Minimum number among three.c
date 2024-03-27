//13.WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("\n\n\t Enter number 1 :");
	scanf("%d",&a);
	printf("\n\n\t Enter number 2 :");
	scanf("%d",&b);
	printf("\n\n\t Enter number 3 :");
	scanf("%d",&c);
	
	d=(a<b && a<c) ? a : ((b<c ) ? b :c);
	printf("\n\n\t minimum value = %d ",d);
}
