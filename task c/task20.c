// WAP to print  sum of square of two numbers only 
//if both numbers is greater than 5
#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf(" sum of = %d\n",c);
	if(c>5)	
	{
		d=c*c;
		printf(" square of sum = %d",d);
	}
	else
	 printf(" square is not found because this number is less than 5");
}
