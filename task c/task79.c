// 3.	Write a program to display 1 to n numbers.
#include<stdio.h>
void main()
{
	int i,j;
	printf("enter a number : ");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		printf("%d\n",j);
	}
}

// output => 1 2 3 4 5 6 7 8 9 ........n
