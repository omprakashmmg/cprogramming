#include<stdio.h>
struct student//globle structure
{
int rollno;
char name[20];	
}s1;//a structure with tag
void main()
{
	printf("please  enter roll no and name of first studend:");
	scanf("%d",&s1.rollno);
	fflush(stdin);
	gets(s1.name);
	 s1.rollno=s1.rollno+10;
	 printf("\nroll no=%d \nand name =%s",s1.rollno,s1.name);
}
