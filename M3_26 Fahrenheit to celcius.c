/*26.Convert temperature Fahrenheit to Celsius
c=(f-32)*5/9
*/

#include<stdio.h>
main()
{
	int f;
	float c;
	printf("\n\n\t Enter fahrenheit value:");
	scanf("%d",&f);
	
	c=(f-32)*5/9;
	printf("\n\n\t Celsius temperature = %f",c);
	
}
