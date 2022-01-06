// WAP a program to percentage of and check result status(pass or fail)
#include<stdio.h>
void main()
{
	float percent;
	printf("Enter your perrcentage : ");
	scanf("%f",&percent);
	if(percent>=0 && percent<=100)
	{
		
		if(percent>=33)
	       printf("you are very lucky that pass");
       	else{
		printf(" sorry you are fail");
	}
	}
	else{
		printf("invalid percetage value");
	}

}
