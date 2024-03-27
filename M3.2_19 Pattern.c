//19. Patterns:
#include<stdio.h>
main()
{
	int i,j,r=5;
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
}
