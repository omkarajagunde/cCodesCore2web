#include<stdio.h>

void main(void){

	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);

	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		printf("Yes %c is a Vowel\n", ch);
	else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		printf("Yes %c is a Vowel\n", ch);
	else
		printf("No %c is not a vowel its a consonent ... \n", ch);
}
