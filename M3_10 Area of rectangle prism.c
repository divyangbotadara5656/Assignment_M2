// Find the area of rectungular prism.

#include<stdio.h>
main()
{
	int A,w,l,h;
	
	printf("\n\n\t Enter value of Width,Height,Length=:");
	scanf("%d%d%d",&w,&h,&l);
	A=w*l+h*l+h*w;
	printf("\n\n\t Area of rectungular prism = %d",A);
	
}
