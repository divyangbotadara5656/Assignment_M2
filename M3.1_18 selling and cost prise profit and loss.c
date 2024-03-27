//18.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
main()
{
	int s,c,p,l;
	printf("\n\n\t Enter Selling prise :");
	scanf("%d",&s);
	printf("\n\n\t Enter cost prise :");
	scanf("%d",&c);
	p=s-c;
	l=c-s;
	
	if(s>c)
	{
		printf("\n\n\t Profit ",p);
	}
	else
	{
		printf("\n\n\t Loss",l);
	}
}
