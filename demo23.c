//  to check a person is elgible for HR or not 
//only female candidates are allowed
//
#include<stdio.h>
void main()
{
	char gen;
	printf(" enter m if you are male and f- if you are female\n : ");
    gen=getche();
    if(gen=='m')
    {
    	printf(" yes you are elgible to apply : ");
	}
	if(gen!='m')
	{
	
	printf(" NO you are not elgible");
    }
	
}
