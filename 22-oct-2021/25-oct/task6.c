//wap to input to count digit ,speces,special charectere,alphabates in a string
#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,spece=0,alpha=0,digit=0,spc=0;
	printf("enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	
	if(str[i]==' ')
	spece++;
	if(str[i]>=97 && str[i]<=122 ||str[i]>=65 && str[i]<=90)
	alpha++;
	if(str[i]>=48 && str[i]<=57)
	digit++;
	if(str[i]>=33 &&str[i]<=47 ||str[i]>=58 && str[i]<=126)
	spc++;
}
printf("the spece count is :%d\n",spece);
printf("the alphabate count is :%d\n",alpha);
printf("the digit count is :%d\n",digit);
printf("the special charecter count is :%d\n",spc);
	
}
