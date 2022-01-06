//print even odd
#include<stdio.h>
void main()
{
	int i,num;
	printf("enter a number :");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		printf("this is even number:%d\n",i);
		else 
		printf("this is odd number:%d\n",i);
	}
	/*for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
	}*/
	
}

