//que7.  write a program to evaluate result by reading mark in three subject from user (pass or fail).
#include<stdio.h>
void main()
{
	int hindi,eng,sci,total;
	printf(" enter three subject mark : ");
	scanf("%d%d%d",&hindi,&eng,&sci);
	total=(hindi+eng+sci)/3;
	printf("%d\t",total);
	if(total>=33)
	{
		printf("%d this is pass",total);
	}
	else{
		printf("%d this is fail",total);
	}
	
}
