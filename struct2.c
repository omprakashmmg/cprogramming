//wap to input 10 students and age and print student is eligible to voting or not with name
#include<stdio.h>
 typedef struct vote
{
	int age;
	char name[30];
} defoult;
void main()
{
	defoult s[10];
	int i;
	for(i=0;i<=9;i++)
	{
		printf("enter age of %d student :",i+1);
		scanf("%d",&s[i].age);
		fflush(stdin);
		printf("enter name of %d student:",i+1);
		gets(s[i].name);
	}
for(i=0;i<=9;i++)
{
	if(s[i].age>=18)
	printf("\n%s is eligible for voting",s[i].name);
	else
	printf("\n%s is not eligible for voting",s[i].name);
}
	
}
