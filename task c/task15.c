// WAP a program to print square of number only if value is not 5
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a number : ");
	scanf("%d",&a);
	if(a!=5)
	{
		b=a*a;
		printf("square of a= %d",b);
	}
	else
	   printf("number is not valid");
	
}
