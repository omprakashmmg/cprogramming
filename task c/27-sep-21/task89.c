// write a program to print digits whitch is divisivle by 4 from     1 to n.
#include<stdio.h>
void main()
{
 int i,num;
 printf("Enter a number : ");
 scanf("%d",&num);
 for(i=1;i<=num;i++)
 {
 	if(i%4==0)
 	{
 		printf("%d\n",i);
	 }
 }
 	
}
