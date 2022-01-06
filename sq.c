//wap to change value of a variable by  find squre of a variable using udf
#include<stdio.h>
void sqr(int *a)
{
*a=(*a)*(*a);
} 
void main()
{
	int sq;
	printf("enter a value :");
	scanf("%d",&sq);
	sqr(&sq);
	printf("the squre value :%d",sq);
}
