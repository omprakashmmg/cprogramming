# include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		if(i%3==2)
		{
			sum=sum+i;
			printf("%d\n",sum);
		}
	}
}
