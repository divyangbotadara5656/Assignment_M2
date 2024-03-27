
// 24.Accept 5 employee name and salary and count average and total salary.

#include<stdio.h>
main()
{
	
	int s1,s2,s3,s4,s5,p,t,a;
	char en[20];
	
	printf("\n\n\t Enter name of first employee:");
	scanf("%s%d",&p,&s1);
	printf("\n\n\t Enter name of Second employee:");
	scanf("%s%d",&p,&s2);
	printf("\n\n\t Enter name of Third employee:");
	scanf("%s%d",&p,&s3);
	printf("\n\n\t Enter name of fourth employee:");
	scanf("%s%d",&p,&s4);
	printf("\n\n\t Enter name of fifth employee:");
	scanf("%s%d",&p,&s5);
	t=s1+s2+s3+s4+s5;
	
	printf("\n\n\t Total salary = %d",t);
	a=t*12;
	printf("\n\n\t Average salary = %d",a);
	
	
	
	
	
}
