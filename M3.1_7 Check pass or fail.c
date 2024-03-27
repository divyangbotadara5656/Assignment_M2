//7. Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int s,m,e,h,t;
	float p;
	
	printf("\n\n\t Enter marks of science :");
	scanf("%d",&s);
	printf("\n\n\t Enter marks of Maths :");
	scanf("%d",&m);
	printf("\n\n\t Enter marks of English :");
	scanf("%d",&e);
	printf("\n\n\t Enter marks of Hindi :");
	scanf("%d",&h);
	t=s+m+e+h;
	p=t/4;
	printf("\n\n\t  Total : %d Percentage : %.2f",t,p);
	
	if(p>=45)
	{
		printf("\n\n\t Pass ");
	}
	else
	{
		printf("\n\n\t Fail ");
	}
}
