/*
8. Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
*/


#include<stdio.h>
main()
{
	
int n,max=1,m;
printf("\n\n\t Enter a number : ");
scanf("%d",&n);

if(n<0)

	n*= -1;
while(n>0)
{
m=n%10;
if(m>max)	
{
	max=m;
}
n /= 10;
}
printf("\n\n\t Maximum number is : %d",max);
}
