/*7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/

#include<stdio.h>
main()
{
int number,reverse_number=0,reminder;
printf("\n\n\t Enter any number :");
scanf("%d",&number);


while(number!=0)
{
	reminder = number % 10;
	reverse_number = reverse_number * 10 + reminder;
	number /= 10;
}
	printf("\n\n\t Number in reverse order : %d",reverse_number);



}
