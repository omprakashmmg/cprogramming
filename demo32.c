// WAp  to print  a character and print character in uppercase if the inputed 
// value is a alphabet and in lowercase.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character : ");
	 scanf("%c",&ch);
	 if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	 {
	 	if(ch>='a' && ch<='z')
	 	{
	 		ch=ch-32;
	        printf("charcter is in uppercase %c",ch);
		 }
		 else
		 {
		 	printf("character is alreay uppercase");
		 }
	 }
	 else
	 {
	 	printf("character is not alphabet");
	 }
}
