#include<stdio.h>

void main(void){

	char ch;

	printf("Enter a character :: ");
	scanf("%c", &ch);

	switch(ch){

		case 'A' ... 'Z':
			printf("%c is Upper case letter\n", ch);
			break;
		case 'a' ... 'z':	
			printf("%c is Lower case letter\n", ch);
			break;
		default:
			printf("Not valid character ...\n");
			break;
	}
}
