// write a program to print cube of a number is number is positive.
#include<stdio.h>
void main()
{
	int num,cube;
	printf("enter a number : ");
	scanf("%d",&num);
	if(num>0)
	{
	cube=num*num*num;
	printf("%d",cube);
    }
    
}
