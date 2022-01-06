//wap to input user name and last name of user and print all name where full name 
//whwer name is in uppercase and last name is in lowercase
#include<stdio.h>
#include<string.h>
void main()
{
	char fname[100],lname[100];
	printf("enter your fname :");
	gets(fname);
	printf("enter lname :");
	gets(lname);
	strupr(fname);
	strlwr(lname);
	strcat(fname,lname);
	printf("your full name :%s",fname);
}
