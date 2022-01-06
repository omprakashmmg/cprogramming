// write a program to check  whether the given character is lowercase alphabet or not. 
#include<stdio.h>
void main()
{
	char  var;
	printf("enter a character : ");
	scanf("%c",&var);
	if(var>='a')
	{
		printf(" character is lowercase : %c ",var);
	}
	else{
		printf("chracter is not lowercase : %c ",var);
	}
	
}
