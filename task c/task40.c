// write a program to perform calculator operations (+,-,*,/)on given two numbers.
#include<stdio.h>
void main()
{
	int choice,a,b,c;
	printf("1. choose a addtion operation\n");
	printf("2. choose a substration operation\n");
	printf("3. choose a multiply operation\n");
	printf("4. choose a dividation operation\n");
	printf("\n\nEnter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
	
		case 1:
			printf(" enter two your numbers : ");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("your addition result : %d",c);
			break;
		
	
		case 2:
			printf(" enter two number : ");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("your substration result : %d",c);
			break;
		
		case 3:
			printf("Enter two number : ");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("your your multiply result : %d",c);
			break;
		
		case 4:
			printf("Enter two number : ");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf(" your rsult substraction : %d",c);
	        break;
			
		default:
		    printf(" invalid choice");
		    
	}

	
}
