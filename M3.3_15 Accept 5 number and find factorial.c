//15.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int number[5],i;
	int fact=1;
	printf("\n\n\t Enter  five number: ");
	scanf("%d",&number[i]);
	
    for(i=0;i<5;i++)
    {
    	fact=fact*i;
    	
	}
	printf("\n\n\t Factorial : %d",i);
	for(i=0;i<5;i++)
	{
	printf("\n\n\t Factorial of %d: %d",number[i],fact(number));	
	}
}
