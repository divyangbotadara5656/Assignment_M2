//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int arr[5];
	int i,sum;
	
	printf("\n\n\t Input five numbers..............");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Input number : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	}
	printf("\n\n\t Sum of all five numbers : %d ",sum);
	
	
}
