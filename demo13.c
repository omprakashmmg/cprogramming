#include<stdio.h>
void main()
{
	int a,b,c,big;
	printf("enter three number");
	
	scanf("%d%d%d",&a,&b,&c);
	big=a>b?(a>c?a:c):(b>c?b:c);
	printf(" The biggest number is %d",big);
	
	
}
