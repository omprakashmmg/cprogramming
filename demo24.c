// WAP to check a year is a leap or not
//
#include<stdio.h>
void main()
{
	int year;
	printf("enter a year to check it is leap or not\n : ");
	scanf("%d",&year);
	if(year%4==0 && year>2000)
	{
		printf(" yes it is a leap year");
	}
}

