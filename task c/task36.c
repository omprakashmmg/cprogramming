//write a program to check whether the emtered number is less than 10 or not
#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<10)
	{
		printf("number is less than %d",num);
	}
	else{
		printf("number is not less than %d",num);
	}
	
}

