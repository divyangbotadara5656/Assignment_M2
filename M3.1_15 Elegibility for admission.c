/*
15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.
*/
#include<stdio.h>
main()
{
	int m,p,c,t,s;
	
	printf("\n\n\t The required criteria for admission to a professional course.....");
	
	printf("\n\n\t Enter your maths marks :");
	scanf("%d",&m);
	
	printf("\n\n\t Enter your Physics marks :");
	scanf("%d",&p);
	
	printf("\n\n\t Enter your chemistry marks :");
	scanf("%d",&c);
	
	t=m+p+c;
	printf("\n\n\t Total of all three : %d",t);
	
	s=m+p;
	printf("\n\n\t Toatl of maths and physics : %d",s);
	
	if(m>=65)
	{
		
		if(p>=55)
		{
			printf("\n\n\t Matched = %d",p);
		}
		else if(s>=140) 
		{
			printf("\n\n\t matched total of maths and physics :",s);
		}
		else if(t>=190)
		{
			printf("\n\n\t person is elegible ",t);
		}
		else
		{
			printf("\n\n\t person is not elegible......");
		}
		if(c>=50)
		{
				printf("\n\n\t %d",t);
			}
			else if(t>=190)
			{
			
			printf("\n\n\t Total of all three :",t);
		}
		else if
		{
		
		printf("\n\n\t Marks not match....");	
	}
			
		
			else if(s>=140)
			{
				printf("\n\n\t Total matched ",s);
			}
			else if(t>=190)
			{
				printf("\n\n\t person is elegible : ",t);
			}
			else
			{
				printf("\n\n\t Person is not elegibel......");
			}
		}
	}
}
	
	
	

	
}
