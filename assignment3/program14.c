#include<stdio.h>

void main(void){

	float a = 4.5f;
	
	// typecasting of 4.5 forcefully happens
	// to 4 ...which is integer hence ...
	// case 4 executes ...
	switch((int)a) {
		
		case 1:
			printf("Case 1\n");
			break;
		case 2:
			printf("Case 2\n");
			break;
		case 4:
			printf("Case 4\n");
			break;
		default:
			printf("Default case\n");
			break;
	}
}
