/* write program to following statement:
7 10 15 22 31 42
*/

#include<stdio.h>
void main()
{
	int i,sum=1;
	for(i=7;i<=42;i=i+sum)
	{
		sum=sum+2;
		printf("%d\n",i);
	}
 } 

