//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include<stdio.h>
main()
{
	int number,sum=0;
	printf("\n\n\t Input any number :");
	scanf("%d",&number);
	
	while(number !=0)
	{
		sum+=number % 10;
		number /=10;
		
	}
	printf("\n\n\t Summation of the digit : %d",sum);
	
}
