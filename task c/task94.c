  //wap to print sum of all numbers where numbers is not divided by three 1 to n.
#include<stdio.h>
void main()
{
	int i,var,sum=0;
	printf("Enter  number : ");
	scanf("%d",&var);
	for(i=3;i<=var;i++)
	{
		if(i%3!=0)
		{
			sum=sum+i;
			printf("%d=%d\n",i,sum);
		}
		
	}
	
}
