// 3. Condition is i<=81 and updation is i=i*i execute loop 3 times
#include<stdio.h>
void main()
{
	int i;
	for(i=3;i<=81;i=i*i)
	{
		printf("%d\n",i);
	}
}

// output => 3 9 81
