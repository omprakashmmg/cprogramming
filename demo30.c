// wap input a character to check is alphabet or not
// if is charater then check vowel and consonent.
#include<stdio.h>
void main()
{
	char alpha;
	printf("enter a character : \n");
	alpha=getche();
	if((alpha>='a' && alpha<='b')|| (alpha>='A' && alpha<='Z'))
	{
		if(alpha=='a' || alpha=='i' || alpha=='o' || alpha=='u'|| alpha=='e' || alpha=='A' || alpha=='I' || alpha=='O' || alpha=='U' || alpha=='E' )
		{
			printf("\ncharcter is a alphabet : ");
		}
		else{
			printf("charcter is a consonent : ");
		}
	}
	else{
		printf("character is not alpha :");
	}
}
