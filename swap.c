//call by refrence, program of swapping by call by refrence 
//t is call by value
#include<stdio.h>
void swap(int a,int b)//no return type with passing argument
{
int temp;
temp=a;
a=b;
b=temp;	
printf("value of is a :%d\n value of b :%d",a,b);
}
void main()
{
int n1,n2;
printf("enter two value :");
scanf("%d%d",&n1,&n2);
swap(n1,n2);	
printf("\n first value :%d\n second value:%d",n1,n2);
}
