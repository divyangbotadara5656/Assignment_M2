/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/

#include<stdio.h>
main()
{
	int number;
	int first,last,sum;
	printf("\n\n\t Input any number :");
	scanf("%d",&number);
	last = number % 10;
	while(number>=10)
	{
		number /=10;
		
	}
	first = number;
	sum = first + last;
	printf("\n\n\t The summation of the first and last digits of is: %d",sum);
}
