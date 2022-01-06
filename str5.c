//wap to count total word prseent in a string
#include<stdio.h>
void main()
{
	char name[100];
	int i,count=0;
	printf("enter your name :");
	gets(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
		
		continue;
		}
		count++;
	}
		printf(" total words present  :%d",count);
	}
	


