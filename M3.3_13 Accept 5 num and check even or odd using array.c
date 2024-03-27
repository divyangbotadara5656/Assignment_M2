/*
13.WAP to accept 5 numbers from user and check entered number is even or odd
using of array
*/
#include<stdio.h>
main()
{
	int i,num[5][5];
	
	printf("\n\n\t Enter five number:");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Number : ",i+1);
		scanf("%d",&num[i]);
		if(i == 0)
		{
			printf("\n\n\t Number is even  ",num[i]);
		}
		else
		{
			printf("\n\n\t Number is odd  ",num[i]);
		}
	}
}
