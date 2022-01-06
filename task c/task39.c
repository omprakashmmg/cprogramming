// write a program to check the given character is alphabet or not
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("character is alphabet");
	}
	else{
		printf("charcter is not alphabet");
	}
}
