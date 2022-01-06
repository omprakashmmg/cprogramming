// WAP to print sum of  square of two numbers only if both numbers are not 5.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character : ");
	scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
	
		if(ch>='a' && ch<='z')
		{
			ch=ch-32;
			printf(" character is in uppercase %c",ch);
		}
		else
		{
			printf("character is already uppercase");
		}
		
		
			
		
	}
	else
	{
		printf("charcter is not alpha ");
	}
}
