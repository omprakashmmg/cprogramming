#include<stdio.h>
void main()
{
	int a,b;
	printf(" input a number : ");
	scanf("%d",&a);
	b=~a;
	printf("%d\n",b);
	b=~a+50;
	printf("%d\n",b);
	b=~a*2;
	printf("%d\n",b);
	b=~a+50*2;
	printf("%d",b);

	
}
