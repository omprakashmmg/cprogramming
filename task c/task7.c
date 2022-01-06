// wap to input rupees from the user and find how many notes of 200 and 50 is the possible amount

#include<stdio.h>
void main()
{
	int amount,twhund,hund,fifty,twenty,ten,five,two,one,total;
	printf("ENTER yUOR AMOUNT ");
	scanf("%d",&amount);
	twhund=amount/200;
	amount=amount%200;
	printf("total two hundred note %d\n",twhund);
	hund=amount/100;
   	amount=amount%100;
	printf("total hundred note %d\n",hund);
	fifty=amount/50;
	amount=amount%50;
	printf("total fifty notes %d\n",fifty);
	twenty=amount/20;
	amount=amount%20;
	printf("total twenty notes %d\n",twenty);
	ten=amount/10;
	amount=amount%10;
	printf("total ten notes %d\n",ten);
	five=amount/5;
	amount=amount%5;
	printf("total five note %d\n",five);
	two=amount/2;
	amount=amount%2;
	printf("total two notes %d\n",two);
	one=amount/1;
	amount=amount%1;
	printf("total one note %d\n",one);
	total=twhund+hund+fifty+twenty+ten+five+two+one;
	printf("total number of note %d",total);
	
}
