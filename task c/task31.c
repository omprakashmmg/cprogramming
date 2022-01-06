// write a program to check wether the given number is multiple 7 or not
#include<stdio.h>
void main()
{
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	if(x%7==0)
	{
		printf("%d is multiple  of 7",x);
	}
	else{
		printf("%d is not multiple of 7",x);
	}
}
