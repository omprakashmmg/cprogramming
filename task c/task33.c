/*wap to calculate net amount by accepting  amount value from user.
    Amount(Rs)          Discount(%)
    Amount>=5000          10%
    otherwise              5%
    */
    
    
#include<stdio.h>
void main()
{
	int amount,res,net;
	printf("Enter amount : ");
	scanf("%d",&amount);
	if(amount>=5000)
	{
		res=(amount*10)/100;
		net=amount-res;
		printf("total discount : %d\n total net amount: %d",res,net);
	}
	else
	{
		res=(amount*5)/100;
		net=amount-res;
		printf("total discount : %d\ntotal net amount %d",res,net);
	}
}
