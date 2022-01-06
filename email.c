//wap to input email and apply validation:like shuld contain atleast on @ and .
#include<stdio.h>
void main()
{
	char email[100];
	int i,at=0,dot=0;
	printf("enter your email :");
	gets(email);
	for(i=0;email[i]!='\0';i++)
	{
		if(email[i]=='@')
		at=at+1;
		else if(email[i]=='.')
		dot=dot+1;
		
	}
	if(dot>=1 &&at>=1)
	printf("this is valid email");
	else
	{
		printf("error");
	}
	printf("total %d @ and %d dot are present ",dot,at);
}
//wap to validate emailid .shuld only contain 1 dot 1 @ .dot shuld come after @
