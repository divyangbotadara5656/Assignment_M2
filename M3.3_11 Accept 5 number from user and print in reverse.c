/*
11.WAP to accept 5 numbers from user and display in reverse order using for
loop and array
*/
#include<stdio.h>
main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter any number : ");
		scanf("%d",&a[i]);
		
	}
	
	//printf("\n\n\t %d,%d,%d,%d,%d",a[4],a[3],a[2],a[1],a[0]);
printf("\n\n\t Number in reverse order :");
for(i=4;i>=0;i--)
{
	printf("\n %d",a[i]);
}
}
