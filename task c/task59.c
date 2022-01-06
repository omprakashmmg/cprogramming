/*34. Input integer centigrade value of temperature and print 
nature of weather
Centigrade <0 : freezing
Centigrade : 0-10 : very cold
11-40 : Summer
Centigrade > 40 :it is Burning*/
# include<stdio.h>
void main()
{
	int sum;
	printf("Emter a number : ");
	scanf("%d",&sum);
	if(sum<0)
	{
		printf("freezing");
	}
	else if(sum>=0 && sum<=10)
	{
		printf(" very cold");
	}
	else if(sum>=11 && sum<=40)
	{
		printf("summer");
    }
	else if(sum>40)
	{
		printf(" it is burning");
	}
	}


