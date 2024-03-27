/*
32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include<stdio.h>
main()
{
	int s,hra,da,gr;
	
	printf("\n\n\t Enter empolyee salary :");
	scanf("%d",&s);
	
	if(s<=10000)
	{
		hra=s+20/100;
		printf("\n\n\t  HRA : %d",hra);
		da=s-80/100;
	    printf("\n\n\t DA : %d",da);
		gr=s+hra-da;
		printf("\n\n\t Gross salary : %d",gr);
		
	}
	else if(s<=20000)
	{
		hra=s+25/100;
		printf("\n\n\t  HRA : %d",hra);
		da=s-90/100;
		printf("\n\n\t DA : %d",da);
		gr=s+hra-da;
		printf("\n\n\t Gross salary : %d",gr);
		
	}
	else
	{
	hra=s+30/100;
		printf("\n\n\t  HRA : %d",hra);
		da=s-95/100;
		printf("\n\n\t DA : %d",da);
		gr=s+hra-da;
		printf("\n\n\t Gross salary : %d",gr);
			
	}
}
