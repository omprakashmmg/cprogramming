//wap to enter your name and name shuld be greter than 3 charectore
#include<stdio.h>
void main()
{
	char name[100];
	int len;
	printf("enter your name :");
	gets(name);
	len=strlen(name);
	
	printf("Total charecters: %d",len);
	if(len<3)
	
		printf("name shuld have atleast 3 charecter :");
		else
		
			printf("\n your name is :%s",name);
		
	
}
