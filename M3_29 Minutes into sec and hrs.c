//29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	int min,sec,hr;
	printf("\n\n\t Enter minutes:");
	scanf("%d",&min);
	
	sec=min*60;
	hr=min/60;
	printf("\n\n\t Seconds = %d  Hours = %d",sec,hr);
}
