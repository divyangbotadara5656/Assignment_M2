/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement
*/
#include<stdio.h>
main()
{
	int a,b;
	char choise;
	printf("\n\n\t Enter numbers :");
	scanf("%d %d",&a,&b);
	printf("\n\n\t + ");
	printf("\n\n\t - ");
	printf("\n\n\t * ");
	printf("\n\n\t / ");
	printf("\n\n\t % ");
	printf("\n\n\t Enter your choise : ");
	scanf(" %c",&choise);
	
	if('+')
	{
		printf("\n\n\t %d",a+b);
	}
	else if('-')
	{
		printf("\n\n\t %d ",a-b);
	}
	else if('*')
	{
		printf("\n\n\t %d ",a*b);
	}
	else if('/')
{

		printf("\n\n\t %d ",a/b);
	}
	else if('%')
	{
		printf("\n\n\t  %d",a/b);
	}
	else
	{
		printf("\n\n\t Please enter valid character.......");
	}
}
