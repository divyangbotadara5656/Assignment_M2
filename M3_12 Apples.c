// 12. Accept number of students from users. I need to give 5 apples to each students. How many apples are required?

#include<stdio.h>
main()
{
	int v,s;
	
	printf("\n\n\t Enter number of students:");
	scanf("%d",&v);
	s=v*5;
	printf("\n\n\t The required apples for the given number of students = %d",s);
	
}
