/* write program to following statement: 
12 11 9 6 2 */

#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=12;i>=2;i=i+sum)
	{
		sum=sum-1;
	printf("%d\n",i);
	}
}

