// 13.calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int fact,n,result=1,i=1,input;
	while(i<=n)
	{
		result=result*i;
		i++;
	}
	result;

printf("\n\n\t Enter a number:");
scanf("%d",&input);
result = fact(input);
printf("\n\n\t The factorial is %d is %d ",input,result);
}
