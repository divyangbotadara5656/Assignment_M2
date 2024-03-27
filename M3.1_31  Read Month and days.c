/*31. Write a program in C to read any Month Number in integer and display the
number of days for this month.*/
#include<stdio.h>
main()
{
	
	int a;
	printf("\n\n\t Enter any number from 1 to 12 for display month and number of days :");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1 : printf("\n\n\t January days : 31");
		break;
		case 2 : printf("\n\n\t February days : 29");
		break;
		case 3 : printf("\n\n\t March days : 30");
		break;
		case 4 : printf("\n\n\t April days : 31");
		break;
		case 5 : printf("\n\n\t May days : 30");
		break;
		case 6 : printf("\n\n\t June days : 31");
		break;
		case 7 : printf("\n\n\t July days : 30");
		break;
		case 8 : printf("\n\n\t August days : 31");
		break;
		case 9 : printf("\n\n\t September days : 30");
		break;
		case 10 : printf("\n\n\t October days : 31");
		break;
		case 11 : printf("\n\n\t November days : 30");
		break;
		case 12 : printf("\n\n\t December days : 31");
		break;
		default : printf("\n\n\t Enter valid number and try again....");
		break;
		
	}
}
