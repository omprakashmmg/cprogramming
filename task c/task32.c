// WAP a program to check whether the given number is positive number or not.
#include<stdio.h>
void main()
{
	int x;
	printf("Enter a nuumber : ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("%d number is positive",x);
	}
	if(x==0)
	{
		printf("%d number is zero ",x);
	}
	if(x<0)
	{
		printf("%d number is negative",x);
	}
}
