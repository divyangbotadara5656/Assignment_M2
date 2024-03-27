//2. Write a program in C to separate individual characters from a string.

#include<stdio.h>
 main()
{
	char s[20];
	int x;
	printf("\n\n\t Enter any string : ");
	scanf("%s",&s);
	
	printf("\n\n\t Individual character from string : ");
for(x=0;s[x] != '\0'; x++)
{
	printf("\n\n\t %c",s[x]);
}
}
