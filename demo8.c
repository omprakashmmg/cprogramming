//
#include<stdio.h>
#include"demo9.c" // define library
void main()
{
	char ch;
	printf(" enter single character ");
	ch=getchar();
	printf("inputed character is %c\n ",ch);
	techpile();// function calling
}
