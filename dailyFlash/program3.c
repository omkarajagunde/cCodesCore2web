#include<stdio.h>

void main(void){

	int numOne;
	printf("Enter a number :: ");
	scanf("%d", &numOne);
	if (numOne % 2 == 0)
		printf("%d is a even number\n", numOne);
	else
		printf("%d is a odd number\n", numOne);
}
