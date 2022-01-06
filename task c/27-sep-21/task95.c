// wap to add all even number  n to 50.
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=n;i<=50;i++)
	{   sum=sum+i;
		printf("\n%d",i);
	}
	printf("\n total add %d",sum);
}

