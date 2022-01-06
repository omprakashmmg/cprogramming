//30. Write a program to carry out the arithmetic operations addition, 
//subtraction, multiplication, and division between to variable values.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter two number : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addtion of and b : %d\n",c);
	c=a*b;
	printf("multipication of and b : %d\n",c);
    c=a-b;
   	printf("substraction of and b : %d\n",c);
    c=a/b;
    printf("divaidation of and b : %d\n",c);

}
