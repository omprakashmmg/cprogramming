#include<stdio.h>
void main()
{
	char a[100];
	int i,len,count=0;
	printf("enter your name :");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ')
		count++;
		{
			printf("%c count is:%d",a[i],count);
			printf("\n");
		}
	}
}
