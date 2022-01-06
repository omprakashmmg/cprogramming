//wap to ask  5 value form user and print only even values.
#include<stdio.h>
void main()
{
	int i,num;
	printf("enter 5 number : ");
	for(i=1;i<=4;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		printf("%d is even number \n:",num);
		else
		printf(" %d is odd number \n:",num);
	}
}

