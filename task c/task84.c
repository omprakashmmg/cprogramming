/* write program to following statement:
8 12 17 23 30 38
*/

#include<stdio.h>
void main()
{
	int i,sum=3;
	for(i=8;i<=38;i=i+sum)
	{
		sum=sum+1;
		printf("%d\n",i);
	}
}
