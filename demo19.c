#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,total;
	printf("enter amount : ");
	scanf("%d",&a);
	b=a/200;
	a=a%200;
	printf("total two hundred notes is : %d\n",b);
	c=a/100;
	a=a%100;
	printf("total hundred notes is %d\n",c);
	d=a/50;
	a=a%50;
	printf("total fifty notes is %d\n",d);
	e=a/20;
	a=a%20;
	printf("total twenty notes is %d\n",e);
	total=a+b+c+d+e;
	printf("total number of notes is %d",total);
}
