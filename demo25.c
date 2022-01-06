#include<stdio.h>
void main()
{
	int year;
	printf("enter a year to check leap year or not : ");
	scanf("%d",&year);
	if(year>2000)
	{
		if(year%4==0)
		{
			printf("yes it is leap year");
		
		}
		else{
			printf(" NO it is not leap year");
		}
		
	}
}
