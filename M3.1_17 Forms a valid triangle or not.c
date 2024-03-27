/*
17.Write a C program to check whether a triangle can be formed with the given
values for the angles
*/
#include<stdio.h>
main()
{
	float a1,a2,a3;
	
	printf("\n\n\t Enter value of angles :");
	scanf("%f %f %f",&a1,&a2,&a3);
	
	if(a1 + a2 + a3 == 180 && a1 > 0 && a2 > 0 && a3 > 0)
	{
		printf("\n\n\t The angles form a valid traiangle");
	}
	else
	{
		printf("\n\n\t The angles do not form a valid triangle");
		
	}
	
}
