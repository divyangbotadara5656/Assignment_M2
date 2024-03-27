/*
16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot
*/
#include<stdio.h>
main()
{
	int c;
	printf("\n\n\t Enter temperature in centigrade : ");
	scanf("%d",&c);
	
	if(c==0)
	{
		printf("\n\n\t Freezing weather");
	}
	else if(c<=10)
	{
		printf("\n\n\t Very Cold weather ");
	}
	else if(c<=20)
	{
		printf("\n\n\t cold weather");
	}
	else if(c<=30)
	{
		printf("\n\n\t Normal in temperature");
	}
	else if(c<=40)
	{
		printf("\n\n\t Its hot");
	}
	else
	{
		printf("\n\n\t Its very hot");
	}
}
