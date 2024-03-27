/*
18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
iii. 5 * 10 = 50
*/

#include<stdio.h>
main()
{
	int n,i;
	
	printf("\n\n\t Enter the number of table you want to display : ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{

		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
	
}
