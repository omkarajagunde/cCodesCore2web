#include<stdio.h>

void main(void){

	int a= 10;

	// Here case 10 is not persent so
	// default case will be executed ...	
	switch(a) {
		case 1:
			printf("Hello\n");
			break;
		case 2:
			printf("Hii\n");
			break;
		default:
			printf("Default case\n");
	}
}
