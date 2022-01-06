//wap to input username and print"welcome to techpile" if username is 
//"techpileuser"and password"techpile"
#include<stdio.h>
#include<string.h>
void main()
{
	char user[100],passw[100];
	int res,pass;
	
	printf("enter the user name :");
	gets(user);
	res=strcmpi(user,"techpileuser");
	printf("enter password :");
	gets(passw);
	pass=strcmpi(passw,"techpile");
	if(res==0&&pass==0)
	printf("welcome to techpile");
	else
	printf("your username and password wrong\n:please enter right id");
	
}
