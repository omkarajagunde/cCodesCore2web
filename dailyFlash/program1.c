#include<stdio.h>

void main(void){

	int numOne,numTwo;
	printf("Enter 2 numbers :: ");
	scanf("%d%d", &numOne, &numTwo);

	if (numOne > numTwo)
		printf("%d is greater than %d\n", numOne, numTwo);
	else
		printf("%d is smaller than %d\n", numOne, numTwo);
}
