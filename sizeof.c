#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	a=sizeof(int);
	b=sizeof(float);
    c=sizeof(short);
    d=sizeof('c');
    e=sizeof(double);
    f=sizeof(long double);


    printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);

	
}
