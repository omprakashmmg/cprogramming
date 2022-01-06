#include<stdio.h>
void main()
{
	int a=5,*ptr;
	ptr=&a;
	printf("\nthe memory adderss of variable is :%d",a);
		printf("\nthe  value at a memory adderss  :%d",&ptr);
		*ptr=*ptr+10;
		printf("\nvalue of pointer variable :%d",ptr);
			printf("\nthe memory adderss of variable is :%d",a);
	
}
