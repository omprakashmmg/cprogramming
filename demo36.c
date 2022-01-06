#include<stdio.h>
void main()
{
	int i;
	printf("Enter a number : ");
	scanf("%d",&i);
	if(i<=10)
	{
		for(;i<=10;i++)
		printf("%d\n",i);
	}
	else{
		for(; i>=10; i--)
		{
			printf("%d\n",i);
		}
	}
}
