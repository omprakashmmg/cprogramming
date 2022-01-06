//wap to input userid from user the and print"welcome to techpile"if first 8 charecter of string 
//is techpile
#include<stdio.h>
#include<string.h>
void main()
{
	char user[100];
	int id;
	printf("enter user id :");
	gets(user);
	id=strncmp(user,"techpile",8);
	if(id==0)
	printf("welcome to techpile");
	else
	printf("your userid is wrong");
}
