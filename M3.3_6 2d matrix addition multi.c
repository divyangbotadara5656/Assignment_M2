/*
6. WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include<stdio.h>
main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\n\n\t Enter values for first matrix :");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n\n\t Enter values 2d array :");
		scanf("%d",&a[i][j]);
	}
	printf("\n\n\t Enter values for second matrix :");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		printf("\n\n\t Enter values 2d array :");
		scanf("%d",&a[i][j]);	
	}
	printf("\n\n\t First matrix is :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf(" %d",a[i][j]);
		
	}
	printf("\n\n\t Second matrix is :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf(" %d",b[i][j]);
		
	}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	c[i][j]=a[i][j]+b[i][j];
	
	printf("\n\n\t Addition of matrix is :");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		printf(" %d ",c[i][j]);
	}
}
