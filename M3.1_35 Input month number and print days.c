//35.Accept the input month number and print number of days in that month.
#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t Input month number :");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1 : printf("\n\n\t  days : 31");
		break;
		case 2 : printf("\n\n\t  days : 29");
		break;
		case 3 : printf("\n\n\t  days : 31");
		break;
		case 4 : printf("\n\n\t  days : 30");
		break;
		case 5 : printf("\n\n\t  days : 31");
		break;
		case 6 : printf("\n\n\t  days : 30");
		break;
		case 7 : printf("\n\n\t  days : 31");
		break;
		case 8 : printf("\n\n\t  days : 30");
		break;
		case 9 : printf("\n\n\t  days : 31");
		break;
		case 10 : printf("\n\n\t  days : 30");
		break;
		case 11 : printf("\n\n\t  days : 31");
		break;
		case 12 : printf("\n\n\t  days : 30");
		break;
		default : printf("\n\n\t Enter valid number and try again....");
		break;
		
	}
}
