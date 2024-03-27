//19. Patterns:
#include<stdio.h>
main()
{
	int row=5,space,i,j;
	for(i=1;i<=row;i++)
	{
		for(space = 1;space <= row-i;space++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
