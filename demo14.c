#include<stdio.h>
void main()
{
	int a,b,c;
	printf("input three number : ");
	scanf("%d%d%d",&a,&b,&c);

	printf("max value is %d",a>b?(a>c?a:c):(b>c?b:c));
}
