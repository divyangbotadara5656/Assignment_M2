/*1. Write a C program to accept two integers and check whether they are equal
or not
*/
#include<stdio.h>
main()
{
	int a,b;
	printf("\n\n\t Enter two integer :");
	scanf("%d %d",&a ,&b);
	
	if(a==b)
	{
		printf("\n\n\t Both are Equal numbers");
	}
	else 
	{
		printf("\n\n\t Numbers are not equal.....");
		}
}
