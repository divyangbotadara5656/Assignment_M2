// 4. Write a program in C to count the total number of words in a string.


#include <stdio.h>
 main()
{
  	char str[50];
  	int i, tw;
  	
  	tw = 1;
 
  	printf("\n\n\t Please Enter any String :  ");
  	scanf("%s",&str);
  	 	   	
  	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			tw++;	
		} 
	}	
	printf("\n\n\t The Total Number of Words in this String %s  = %d", str, tw);
	
}
