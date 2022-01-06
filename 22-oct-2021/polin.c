#include<stdio.h>
#include<string.h>
void main()
{
	char name[100]="madam",rev[100];
	int res;
	res=strcpy(rev,name);
	strrev(name);
	printf("%s",res);
	strcmpi(name,res);
	printf("%s",name);
	if(name==0)
	printf("%d :pollindrome");
	else
	printf("not");
}
