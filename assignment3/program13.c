#include<stdio.h>

void main(void){

	int a = 4;
	
	switch(a) {
		case 1:
			printf("Hello\n");
			break;
		case 4:
			printf("Hii\n");
			break;
		// 2 + 2 => 4 which will duplicate
		// case hence error
		case 2+2:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
		}
}
