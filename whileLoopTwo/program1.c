#include<stdio.h>

void main(void){

	int num, numCpy, sum = 0;
	printf("Enter a num :: ");
	scanf("%d", &num);
	numCpy = num;
	while (num != 0 ){

		sum = sum + num--;
	}

	printf("The Sum of all natural number between 1 to %d is: %d\n", numCpy, sum);
}
