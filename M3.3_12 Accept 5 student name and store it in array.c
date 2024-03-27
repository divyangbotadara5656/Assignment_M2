//12.WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	
	char name[5][20];
	int i;
	
	printf("\n\n\t Enter name of five student :");
	for(i=0;i<5;i++)
	{
		
		printf("\n\n\t Enter name of student %d :",i+1);
		scanf("%s",&name[i]);
		
	}
	printf("\n\n\t Names of students :");
	for(i=0;i<5;i++)
	{
		printf("\n\n\t %d.%s",i+1,name[i]);
	}
	
	}
