//32. Write a program using a switch statement to check whether a 
//number given by the user is odd or even.
#include<stdio.h>
void main()
{
	int x;
	printf("enter a number : ");
	scanf("%d",&x);
	switch(x%2==0)
	{
		case 1:
			printf(" number is even");
			break;
			
		default:
			printf("number is odd");
	}
}
