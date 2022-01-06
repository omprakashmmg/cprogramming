//wap to input user and check pollindrame string
#include<stdio.h>
#include<string.h>
void main()
{
	char name[100],rev[100];
	printf("enter string:");
	gets(name);
	strcpy(rev,name);
	strrev(rev);
	if(strcmpi(name,rev)==0)
	printf("polindrome");
	else
	printf("not pollindrame");
	
}
