//11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	
	int a;
	printf("\n\n\t Enter any number :");
	scanf("%d",&a);
	
	(a % 2 ==0) ? printf("\n\n\t even number",a) : printf("\n\n\t odd number",a);
}
