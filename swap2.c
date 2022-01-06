//call by refrence, program of swapping by call by refrence 
#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
 int temp;
 temp=*ptr1;
 *ptr1=*ptr2;
 *ptr2=temp;
 	
}
void main()
{
int a,b;
	printf("Enter two value:");
	scanf("%d%d",&a,&b);
	printf("\nbefore swaping value :a=%d and, b=%d ",a,b);
	swap(&a,&b);//call by refrence
	printf("\naftere swaping ,a=%d and b=%d ",a,b);
	
}
