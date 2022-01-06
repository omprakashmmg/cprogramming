//wap to toggle each charectere of string .techpile in this program wea are going to learn haw to converted 
//lower case  canverted into uppercase and uppercase converted into lowalcase
#include<stdio.h>
#include<string.h>
void main()
{
	char tog[100];
	int i;
	printf("enter a charecter :");
	gets(tog);
	for(i=0;tog[i]!='\0';i++)
	if(tog[i]>='a' && tog[i]<='z')
	tog[i]=tog[i]-32;
	else if(tog[i]>='A' && tog[i]<='Z')
	tog[i]=tog[i]+32;
	printf("toggle %s",tog);
	
}
