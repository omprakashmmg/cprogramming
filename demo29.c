/* WAP  to check result staeus of student based on the percentage  
0-32 :fail
33-44: third division
45-59:second division
60-100:first division
*/

#include<stdio.h>
void main()
{
	float per;
	printf("Enter your percent : ");
	scanf("%f",&per);
	if(per>=0 && per<=32)
	{
		printf(" sorry you are fali");
	
	}
	else if( per>=33 && per<=44)
	{
		printf(" you are pass with third division\n");
		printf("please focus your study\n");
	}
	 else if(per>=45 && per<=59)
	 {
	 	printf("your are pass second division\n");
	 	printf(" but it is not sufficent you good skills\n");
	 }
	 
	 else if(per>=59 && per<=100)
	 {
	 	printf("you are very lecku that pass with first divisio\n");
	 }
	 else{
	 	printf("sorry invalid percent please try again");
	 }
}
