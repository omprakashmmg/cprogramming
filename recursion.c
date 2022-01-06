//wap to find factoriyal by using recursion
#include<stdio.h>
void main()
{
	int n,res;
	printf("enter a value :");
	scanf("%d",&n);
     res=getfact(n);
	printf("fact is: %d",res);
}
int getfact(int n)
{
	if(n==1)
	return 1;
	else
	return n*getfact(n-1);
	
}
