//wap to count total occurance of 'a' in your name
#include<stdio.h>
void main()
{
	char name[100];
	int i,count=0;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a'||name[i]=='A')
		{
			count++;
			printf("a present in :%d",count);
		}
	}
}
