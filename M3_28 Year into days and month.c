//28.Convert years into days and months

#include<stdio.h>
main()
{
	int year,days,months;
	
	printf("\n\n\t Enter Number of year:");
	scanf("%d",&year);
	
	months=year*12;
	days=year*365;

	
	printf("\n\n\t Number of year = %d Number of months = %d Number of days = %d",year,months,days);
	
	
}
