/*8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.*/

#include<stdio.h>
main()
{
	
	float height;
	printf("\n\n\t Enter the height of a person in centimeters :");
	scanf("%f",&height);
	
	if(height<150)
	{
		printf("\n\n\t short height");
	}
	else if(height>=150 && height<180)
	{
		printf("\n\n\t Average height");
		
	}
	else
	{
		printf("\n\n\t Tall height");
	}
	
}
