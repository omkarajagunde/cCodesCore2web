#include<stdio.h>

void main(void){

	char ch;
	printf("Enter a character :: ");
	scanf("%c", &ch);

	switch((int)ch){

		case 65 ... 90:printf("%c is a Uppercase character\n",ch);
			     break;
		case 97 ... 122:printf("%c is a Lowercase character\n",ch);
			      break;
		default:
			     printf("%c is not a valid character ...\n",ch);
			     break;
	}
}
