#include<stdio.h>
void main()
{
	int year;
	printf("Enter year to check leap year or not : ");
	scanf("%d",&year);
	if(year>=2000)
	{
		if(year%4==0)
		{
   	
			printf(" yes year is leap year : ");
		}
			else{
				printf("No year is not leap lear");
			}
		
	}
}
