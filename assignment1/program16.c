#include<stdio.h>

void main(void){

	char ch;

	printf("Enter a character to know its type : ");
	scanf("%c", &ch);

	if (ch >= 65 && ch <= 90)
		printf("%c is a Capital letter ...\n", ch);
	else if (ch >= 97 && ch <= 122)
		printf("%c is a Small letter ...\n", ch);
	else if (ch >= 48 && ch <= 57)
		printf("%c is a Number ...\n", ch);
	else
		printf("%c is a SpecialSymbol ...\n", ch);
}
