//7. WAP Find out length of string without using inbuilt function
#include <stdio.h>
main()
{
    
    char str[50],i;
    
    printf("\n\n\t Enter a string: ");
    scanf("%s",str);

    
    for(i=0; str[i]!='\0'; ++i);
    
       printf("\n\n\t Length of input string: %d",i);
    
    
}
