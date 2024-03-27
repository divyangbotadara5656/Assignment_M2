/*
Write a program of structure employee that provides the following                      a.
a. information -print and display empno, empname, address
andage

*/
#include<stdio.h>
struct employee
{
	int no;
	char name[20];
	char add[30];
	
}E;

main()
{
	printf("\n\n\t Enter employee number :");
	scanf("%d",&E.no);
	strcpy(E.name, "%s");
	printf("\n\n\t Enter employee name :");
	scanf("%s",&E.name);
	printf("\n\n\t Enter address :");
	scanf("%s",&E.add);
	

    printf("\n\n\t Number : %d",E.no);
    
    printf("\n\n\t Name : %s",E.name);
    printf("\n\n\t Address : %s",E.add);
}
