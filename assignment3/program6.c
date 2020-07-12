#include<stdio.h>

void main(void){

	int a=5, b=3;
	
	switch(a) {
		case 1:
			printf("One\n");
		case 5:
			printf("Two.\n");
		// Here is a error as lvalue cant be a case
		// variable, it should be actual int value
		case b:
			printf("Three.\n");
		case 'a':
			printf("Four.\n");
		default:
			printf("Default.\n");
	}
}
