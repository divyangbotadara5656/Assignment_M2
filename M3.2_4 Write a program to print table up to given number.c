//4. WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int a,sum=1,i;
	printf("\n\n\t Enter a number of table which you want to display :");
	scanf("%d",&a);
	
	i=1;
	while(i<=10)
	{
		
		printf("\n\n\t %d * %d = %d",a,i,sum);
		i=i+1;
			sum=a*i;
		
	}
}
