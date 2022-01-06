#include<stdio.h>
void main()
{
	int amount,thun,ohun,fifty,twenty,ten,five,two,one;
	printf("enter rupee : ");
	scanf("%d",&amount);
	thun=amount/200;
	amount=amount%200;
	printf(" total two hundred notes %d\n",thun);
	ohun=amount/100;
	amount=amount%100;
	printf("total one hundred notes %d\no",ohun);
	fifty=amount/50;
	amount=amount%50;
	printf("toal fifty notes is %d\n",fifty);
	twenty=amount/20;
	amount=amount%20;
	printf("toal twenty notes is %d \n",twenty);
	ten=amount/10;
	amount=amount%10;
	printf(" total ten notes is %d\n ",ten);
	five=amount/5;
	amount=amount%5;
	printf("total five notes is %d\n",five);
	two=amount/2;
	amount=amount%2;
	printf("total two notes is %d\n",two);
	one=amount/1;
	amount=amount%1;
	printf("toal one notes is %d",one);
	
}
