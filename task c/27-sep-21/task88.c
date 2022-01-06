// Wap to print all odd numbers form 10 to n.
#include<stdio.h>
void main()
{
	int i,num;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=10;i<=num;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
	}
}
