/* 22. Calculate compount interest(compound interest formula:
a.Formula to calculate compound interest annually is given by: Amount =P(1+r/100)t
b.Compound interest = Amount - p.
*/

#include<stdio.h>
main()
{
	int n1,p,r,t,ci;
	printf("\n\n\t Enter any amount:");
	scanf("%d",&n1);
	printf("\n\n\t Enter amount of p:");
	scanf("%d",&p);
	printf("\n\n\t Enter amount of r:");
	scanf("%d",&r);
	printf("\n\n\t Enter amount of t:");
	scanf("%d",&t);
	
	n1= p*(1+r/100)*t;
	printf("\n\n\t Annual interest: %d",n1);
	
	ci=n1-p;
	printf("\n\n\t Compound interest: %d",ci);
	
	
}
