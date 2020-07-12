#include<stdio.h>

void main(void){

	int number1, number2;
	
	printf("Enter two integers: ");
	scanf("%d %d", &number1, &number2);

	/*
	 * If number1 is greater than or equal to number 2 
	 * then control or flow of execution will go into 
	 * if block
	 */
	if (number1 >= number2) {
		/*
		 * If number1 is equal to number2 the control will go
		 * in this if block
		 */
		if (number1 == number2) {
			printf(" %d = %d\n",number1,number2);
		}else {
			printf(" %d > %d\n", number1, number2);
		}
	}else {
		printf(" %d < %d\n",number1, number2);
	}
}
