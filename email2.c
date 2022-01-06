#include<stdio.h>
void main()
{
	char email[100];
	int i,a,d,at=0,dt=0;
	printf("enter your email :");
	gets(email);
	for(i=0;email[i]!='\0';i++)
	{
		if(email[i]=='@')
		{
			at++;
			a=i;
		}
		if(email[i]=='.')
		{
			dt++;
			d=i;
			
		}
	}
	printf("total %d @ and %d dot are present :",at,dt);
	if(dt==1&&at==1)
	{
		printf("this is acceptble");
		
	}
	else
	{
		printf("this is not acceptble");
	}
}
