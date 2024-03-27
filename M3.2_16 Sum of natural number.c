//16.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	do
	{
	
	printf("\n\n\t Enter any number :");
	scanf("%d",&n);
}
while(n<=0);
for(i=1;i<=n;++i)
{
	sum += i;
}
printf("\n\n\t Sum = %d",sum);
}
