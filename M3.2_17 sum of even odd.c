/*
17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop
*/
#include<stdio.h>
main()
{
int even=0,odd=0,evensum=0,oddsum=0;
int numleft = 5;
int num;
while(numleft > 0)
{
	printf("\n\n\t Enter a number :");
	scanf("%d",&num);
	if(num %2 == 0)
	{
		even++;
		evensum=+num;
	}
	else 
	{
		odd++;
		oddsum=+num;
	}
	numleft--;
}
printf("\n\n\t Number of even numbers : %d",even);
printf("\n\n\t Number of odd nnumbers : %d",odd);
printf("\n\n\t Sum of even : %d",evensum);
printf("\n\n\t Sum of odd : %d",oddsum);
}
