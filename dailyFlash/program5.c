#include<stdio.h>

void main(void){

	int num;
	printf("Enter a number :: ");
	scanf("%d", &num);
	if (num % 5 == 0 && num % 11 == 0)
		printf("%d is divisible by 5 and 11 ...");
	else 
		printf("%d is not divisible by 5 and 11 ...");
}
