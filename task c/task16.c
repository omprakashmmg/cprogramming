// WAP to print  square of number only if value is grater than 5
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a>5)
	{ 
	  b=a*a;
	  printf("square of a = %d",b);
	}
	else
	  printf(" number is not valid because");
}
