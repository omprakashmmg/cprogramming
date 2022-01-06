//wap to input firstname and last name and user print full name
#include<stdio.h>
#include<string.h>
void main()
{
	char fname[100],lname[100];
	
	printf("enter first name :");
	gets(fname);
	printf("enter last name :");
	gets(lname);
	strcat(fname,lname);
	printf("full name :%s",fname);
	
}
