//write a program to input three numbers from iser and find sum and average of number.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("ENTER first NUMBER");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("enter third number");
	scanf("%d",&c);
	float sum=a+b+c;

	printf("your sum result is: %.2f",sum);
	
	float avg=sum/3;


    printf("your average result is: %.2f",avg);
}

