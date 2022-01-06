//31. Write a program that checks whether a character entered by the 
//user is a vowel or not.
#include<stdio.h>
void main()
{
	char alpha;
	printf("Enter a character : ");
	scanf("%c",&alpha);
		if(alpha=='a' || alpha=='i' || alpha=='o' || alpha=='u'|| alpha=='e' || alpha=='A' || alpha=='I' || alpha=='O' || alpha=='U' || alpha=='E')
	{
		printf("%c character is vowel :",alpha);
	}
	else{
		printf("%c character is not vowel :",alpha);
	}
}

