//19. Patterns:
#include<stdio.h>
main()
{
	int i,j,row=5,count=65;
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
}
