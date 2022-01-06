// a loop where updation is not fixed.   3 6 10 15 21 
#include<stdio.h>
void main()
{
	int i,num=2;
	//for(i=3; i<=21; i=i+num)
	for(i=3; i<=21;i=i+num)
	{
		num=num+1;
		
		printf("%d\n",i);
	}
	

}
