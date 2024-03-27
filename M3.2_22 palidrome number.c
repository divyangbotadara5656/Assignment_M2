/*
22. Accept 3 numbers from user using while loop and check each numbers
palindrome
*/
#include<stdio.h>
main()
{
	int num,rnum=0,remainder,originalnum,count;
	count=0;
	while(count < 3)
	{
		printf("\n\n\t Enter a number :");
		scanf("%d",&num);
		originalnum = num;
		
	while(num != 0)
	{
		remainder = num % 10;
		rnum = rnum * 10 + remainder;
		num /=10;
	}
	if(originalnum == rnum)
	printf("\n\n\t %d is a palidrome.",originalnum);
	else
	printf("\n\n\t %d is not a palidrome.",originalnum);
	rnum=0;
	count++;
	}
}
