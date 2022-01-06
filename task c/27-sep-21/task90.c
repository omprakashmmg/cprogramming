
/* wap to print following statements
   1 2 4 7 11 16 22 .......................n.*/
   
#include<stdio.h>
void main()
{
	int i,num,sum=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i=i+sum)
	{
		sum=sum+1;
		printf("%d\n",i);
	}
}
