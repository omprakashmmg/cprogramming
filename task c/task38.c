// write a program to check  whether the given character is uppercase alphabet or not
#include<stdio.h>
void main()
{
	char var;
	printf("enter a charter :");
	var=getchar();
	if(var>='A' && var<='Z')
	{
		printf("character is upppercase %c: ",var);
	}

	else{
		printf("character is not uppercase %c",var);
	}
}
