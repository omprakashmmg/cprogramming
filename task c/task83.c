//  WAP to find factorial of a given number.
# include<stdio.h>
void main()
{
	int i,num, f=1;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	f=f*i;
	
    }
	printf(" factorial is %d:  ",f);
    
	
}
