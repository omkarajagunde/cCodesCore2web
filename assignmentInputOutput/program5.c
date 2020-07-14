#include<stdio.h>

void main(void){

	int numOne, numTwo;
	printf("Enter Two numbers :: ");
	scanf("%d%d",&numOne, &numTwo);

	printf("Average of %d and %d is --> %d\n", numOne, numTwo, (numOne+numTwo)/2);
}
