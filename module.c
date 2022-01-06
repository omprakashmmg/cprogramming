// write a program to enter a single number and find that number last  digit.
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a single number : ");
	scanf("%d",&a);
	b=a%10;
	printf(" one last digit of inputed number %d\n",b);
	b=a%100;
	printf(" two last digit of inputed number %d\n",b);
   	b=a%1000;
   	printf(" three last digit of inputed number %d\n",b);

	
}
