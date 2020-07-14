#include<stdio.h>

void main(void){

	char ch;
	printf("Enter a Character :: ");
	scanf("%c", &ch);

	switch(ch){

		case 'a':printf("a is vowel\n");
			break;
		case 'e':printf("e is vowel\n");
                        break;
		case 'i':printf("i is vowel\n");
                        break;
		case 'o':printf("o is vowel\n");
                        break;
		case 'u':printf("u is vowel\n");
                        break;
		default:printf("%c is consonent\n", ch);
			break;	
	}
}
