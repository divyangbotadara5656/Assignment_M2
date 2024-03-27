// 12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
main()
{
	int num,r,sum=0,temp;
	printf("\n\n\t Input any number :");
	scanf("%d",&num);
	
	for(temp==num; num !=0; num = num/10)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(sum==temp)
	printf("\n\n\t %d is an armstrong number.",temp);
	else
	printf("\n\n\t %d is not an armstrong number.",temp);
	
}
