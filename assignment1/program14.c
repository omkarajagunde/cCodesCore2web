#include<stdio.h>

void main(void){

	int number;

	printf("Enter a number : ");
	scanf("%d",&number);

	if (number >= 20 && number <= 25)
		printf("The number %d is in range 20 -25\n", number);
	else
		printf("The number %d is not in range 20 -25\n", number);
}
