/*30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-*/
// last period 800 curret 300 800-300=500 500*0.18=charges
#include<stdio.h>
main()
{
	float c,p,r,con,charge,t;
	
	printf("\n\n\t Enter previous year charges :");
	scanf("%f",&p);
	printf("\n\n\t Enter currnt year charges :");
	scanf("%f",&c);
	printf("\n\n\t Rate per unit :");
	scanf("%f",&r);
	 
	con=p-c;
	charge=con*r;
	t=charge;
	
	if(charge>800)
	{
		t = charge + (charge*0.18);
		
	}
	else 
	
	{
	t=charge;	
	}
	if(t<=265)
	{
		printf("\n\n\t Consumed unit : %.1f",con);
		printf("\n\n\t Total charges : Rs %.1f",t);
	}
	
	
}
