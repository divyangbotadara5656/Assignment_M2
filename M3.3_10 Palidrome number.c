//10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>

main()
{
    int i,n,r,s=0;
    clrscr();
     
    printf("\n\n\t Enter The Number:");
    scanf("%d",&n);
     
    
    for(i=n;i>0;)
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
     
    
    if(s==n)
    {
        printf("\n\n\t %d is a Palindrome Number",n);
    }
    else
    {
        printf("\n\n\t %d is not a Palindrome Number",n);
    }
}
