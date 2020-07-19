#include<stdio.h>

void main(void){

	char LOWORD;
	char HIWORD;

	printf("Lower Bound of Range:");
	scanf("%c", &LOWORD);
	printf("Uppper Bound of Range:");
	scanf(" %c", &HIWORD);

	while(LOWORD != HIWORD){

		switch(LOWORD){
			
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':printf("%c is a vowel ...\n", LOWORD++);
				 break;
			default:printf("%c is a consonent ...\n", LOWORD++);

		}
	}
}
