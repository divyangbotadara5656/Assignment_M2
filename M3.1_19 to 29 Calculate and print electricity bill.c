/*
19.Write a program in C to calculate and print the electricity bill of a given
customer. The customer ID, name, and unit consumed by the user should
be captured from the keyboard to display the total amount to be paid to the
customer. The charge are as follow :
20. Unit 21. Charge/unit
22. upto 350 23. @1.20
24. 350 and above but less than 600 25. @1.50
26. 600 and above but less than 800 27. @1.80
28. 800 and above 29. @2.00
*/
#include<stdio.h>
main()
{
	int u;
	char i[10],n[15];
	float c; 
	printf("\n\n\t Enter your ID :");
	scanf("%s",&i);
	printf("\n\n\t Enter your Name :");
	scanf("%s",&n);
	printf("\n\n\t Enter your unit consumed :");
	scanf(" %d",&u);

	
	if(u<350)
	{
		printf("\n\n\t Your total will be = %d",u);
	}
	else if(u<=600 && u + c)
	{
		c=1.50;
		printf("\n\n\t Your total will be =");
	}
	else if(u<=800 && u + c)
	{
		c=1.80;
		printf("\n\n\t Your total will be =");
	}
	else if(u>800)
	{
		c=2.00;
		printf("\n\n\t your total will be =");
	}
	else
	{
		printf("\n\n\t Thank you......");
	}
}
