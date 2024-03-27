//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	int num,sq,cu;
	
	printf("\n\n\t Enter an number :");
	scanf("%d",&num);
	
	printf("\n\n\t Power of %d :",num);
	printf("\n\n\t %d",num);
	
	sq=num*num;
	printf("\n\n\t %d",sq);
	
	cu=num*num*num;
	printf("\n\n\t %d",cu);
}
