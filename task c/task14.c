// WAP to print square of number only  if number is 5 or 3
#include<stdio.h>
void main()
{
	int a,b;
	 printf("Enter a number : ");
	 scanf("%d",&a);
	 if(a==5||a==3)
	 {
	 	b=a*a;
	 	printf(" square of a= %d",b);
	 }
	 else{
	 	printf(" number is not valid");
	 }
	 
}
