//wap to input name from user and print name with hello.all username letters should be small case.
//TECHpile
#include<stdio.h>
#include<string.h> 
void main()
{
	char lwr[100];
	int cnv;
	printf("enter a string :");
	gets(lwr);
	cnv=strlwr(lwr);
	printf(" converted string:%s",cnv);
	
}
