//wap a program input password from user and print "your welcome" is password techpile
#include<stdio.h>
void main()
{
	char pass[100];
	int res;
	printf("enter your password :");
	gets(pass);
     res=strcmp(pass,"techpile");
     if(res==0)
     printf("your welcome");
     else
     printf("%d\npassword is wrong",res);
	 
	 
}
