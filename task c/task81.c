// 5.	Write a program to find product of first n numbers.
#include<stdio.h>
void main()
{
	int i,sum,num;
	printf("Enter a number : ");
	scanf("%d",&sum);
	for(i=1;i<=sum;i++)
	{
		printf("%d\n",i);
		num=num*i;
	}
	printf("total of first n numbers :  %d\n",num);

	
}
