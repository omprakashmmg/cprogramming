// WAP to find maximum in the given three numbers.
#include<stdio.h>
void main()
{
	int x,y,z;
	printf("Enter three number : ");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf(" large number is %d");
	}
	
	if(y>x && y>z)
	{
		printf(" large number is %d");
	}
	if(z>x && z>y)
	{
		printf(" large number is %d : ");
	}
}
