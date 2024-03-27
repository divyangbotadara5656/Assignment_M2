//19. Patterns:
#include<stdio.h>
main()
{
	int row=5,i,j;
	
	for(i=1;i<=row;i++)
	{
		char ch ='A';
		for(j=1;j<=i;j++)
		{
			printf(" %c ",ch);
			ch++;
		}
		printf("\n");
		
	}
}
