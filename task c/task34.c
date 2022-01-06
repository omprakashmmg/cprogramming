// Wap to check wether the given year is a leap year or not .
#include<stdio.h>
void main()
{
	int year;
	printf("Enter  year to check leap year or not : ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d\n this year is leap year",year);
	}
	else{
		printf("%d this year is not leap year",year);
	}
}
