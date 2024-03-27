//25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,a,t;
	
	printf("\n\n\t Enter transport expense:");
	scanf("%d",&e1);
	printf("\n\n\t Enter parking expense:");
	scanf("%d",&e2);
	printf("\n\n\t Enter warehouse expense:");
	scanf("%d",&e3);
	printf("\n\n\t Enter rent expense:");
	scanf("%d",&e4);
	printf("\n\n\t Enter electricity expense:");
	scanf("%d",&e5);
	
	t=e1+e2+e3+e4+e5;
	a=t/5;
	printf("\n\n\t Average salary = %d",a);
	
}
