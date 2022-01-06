/* WAP to find siple interest
(pa*rate*time)/100.*/
#include<stdio.h>
void main()
{
	float pay,rate,time;
	printf("enter your amount");
	scanf("%f",&pay);
	printf("enter your rate");
	scanf("%f",&rate);
	printf("enter your time");
	scanf("%f",&time);
	float res=(pay*rate*time)/100;
	printf("your result : %.2f",res);
}

