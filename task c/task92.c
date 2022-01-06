 //print sum of all numbers between 1 to n where num dovided by 3 is equal to 2 
#include<stdio.h>
void main()
{
	int i,var,sum=0;
	printf("Enter a number ; ");
	scanf("%d",&var);
	for(i=1;i<=var;i++)
	{
		if(i%3==2)
		{
		sum=sum+i;
		printf("%d\n",i);	
		}
	}
	printf(" \n total sum : %d",sum);
}
