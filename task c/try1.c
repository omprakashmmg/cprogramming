#include<stdio.h>
void main()
{
	int sec,min,rem;
	printf("enter your time in minutes");
	scanf("%d",&sec);
	min=sec/60;
	rem=sec%60;
	printf("total minutes is %d\t remaining sec is %d",min,rem);
}
