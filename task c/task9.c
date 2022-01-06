// write a program to convert minutes to the hours and remainning minutes .
#include<stdio.h>
void main()
{
	int minutes,hour,sec,rem;
	printf("ENTER MINUTES : ");
	scanf("%d",&minutes);
	hour=minutes/60;
	rem=minutes%60;
	printf("total hour is %d\t and remaining minutes is %d",hour,rem);
}
