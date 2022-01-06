// write a program to calculate simple interest value:(pricipal amount*rate*time)/100
#include<stdio.h>
void main()
{
	const int val=100;// val is the constant
	float pa,rate,time,si;
	printf(" enter pricipal amount : ");
	scanf("%f",&pa);
	printf(" enter rate of interest");
	scanf("%f",&rate);
	printf("enter time od interest");
	scanf("%f",&time);
	si=(pa*rate*time)/val;
	printf("total simple interest for %f time with %f rate is %f ",time,rate,si);
	
}
