// write a program to print sum of square of two numbers only if first 
//number is greater than 5 and second number is exactly 5.
#include<stdio.h>
void main()
{
	
	int a,b;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	if(a>5)
	{
		
		
		printf("%d",a*a);
	}

		if(b==5)
	{
		printf("%d",b*b);
	}
}
