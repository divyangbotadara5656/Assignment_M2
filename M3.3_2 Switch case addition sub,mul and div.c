/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/
#include<stdio.h>
main()
{
	int n1,n2;
	char ch;
	
	printf("\n\n\t Enter number 1:");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter number 2:");
	scanf(" %d",&n2);
	

	printf("\n\n\t + = Addition",n1+n2);
	printf("\n\n\t - = Subtraction",n1-n2);
	printf("\n\n\t * = Multiply",n1*n2);
	printf("\n\n\t / = division",n1/n2);	
	printf("\n\n\t ----------------------------------------");
	printf("\n\n\t Input your choice:",ch);
	scanf(" %c",&ch);

    switch(ch)
	{
	case '+' :	printf("\n\n\t Addition = %d",n1+n2);
	break;
	case '-' : printf("\n\n\t Subtraction = %d",n1-n2);
	break;
	case '*' : printf("\n\n\t Multiply = %d",n1*n2);
	break;
	case '/' : printf("\n\n\t Division = %d",n1/n2);
	break;
	default  : printf("\n\n\t Select proper choice..........");
	break;
	}
}
	
