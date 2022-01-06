//wap to input your name and print a new line using string function
#include<stdio.h>
void main()
{
	char name[50];
	int i;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
    printf("the name is: %c",name[i]);
    	if(name[i]==' ')
    	break;
    	
	{

	}
	printf("\n");
}
}
