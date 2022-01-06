/* write a program to calculate net amount by accepting amount value
        --------------------------------------------------------
             Amount(Rs)                Discount(%)
        --------------------------------------------------------
             1-1000                        5%
        --------------------------------------------------------
             1001-2000                     10%
        --------------------------------------------------------
             2001-3000                     15%
        --------------------------------------------------------
             3001-4000                     20%
        --------------------------------------------------------
            >4000                          25%
        --------------------------------------------------------
*/


# include<stdio.h>
void main()
{
	float amount,rate,net;
	printf("Enter your amount : ");
	scanf("%f",&amount);
	if(amount>=1 && amount<=1000)
	{
	
	rate=(amount*5)/100;
	printf("discount : %f\n",rate);
	net=amount-rate;
	printf("after discount net amount : %f",net);
	
    }
    else if(amount>=1001 && amount<=2000)
    {
    	rate=(amount*10)/100;
    	printf("discount : %f\n",rate);
	    net=amount-rate;
	    printf("after discount net amount : %f",net);
    	
	}
	else if(amount>=2001 && amount<=3000)
	{
		rate=(amount*15)/100;
    	printf("discount : %f\n",rate);
	    net=amount-rate;
	    printf("after discount net amount : %f",net);
    	
	}
	else if(amount>=3001 && amount<=4000)
	{
		rate=(amount*20)/100;
    	printf("discount : %f\n",rate);
	    net=amount-rate;
	    printf("after discount net amount : %f",net);
    	
	}
	else if(amount>4000)
	{
		rate=(amount*25)/100;
    	printf("discount : %f\n",rate);
	    net=amount-rate;
	    printf("after discount net amount : %f",net);
    	
	}
}
