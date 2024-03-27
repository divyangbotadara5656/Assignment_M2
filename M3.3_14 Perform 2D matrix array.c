//14.Perform 2D matrix array

#include<stdio.h>
main()
{
	int mtr[3][3];
	
	int r,c;
	
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				
				printf("\n\n\t Input matrix : [%d][%d]",r,c);
				scanf("%d",&mtr[r][c]);
			}
			printf("\n\n");
		}
		for(r=0;r<3;r++)
		{
			for(c=0;c<3;c++)
			{
				printf(" %d",mtr[r][c]);
			}
			printf("\n\n");
		
	}
}
