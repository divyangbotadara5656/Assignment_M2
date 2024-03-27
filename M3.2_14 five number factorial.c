// 14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int n[5], i;
    unsigned long long fact = 1;
    

   
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= 5; ++i)
		 {
		 	printf("\n\n\t Enter an integer: ");
   			 scanf("%d",&n[i]);
            fact *= i;
        }
        for (i = 1; i <= 5; ++i)
        {
        printf("Factorial of %d = %d",fact,n);
    	}
    }


}


   

