#include<stdio.h>

void main(void){

	int numOne;
	printf("Enter a number :: ");
	scanf("%d", &numOne);
	if (numOne > 0)
		printf("%d is a positive number\n", numOne);
	else
		printf("%d is a negative number\n", numOne);
}
