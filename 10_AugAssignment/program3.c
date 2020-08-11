#include<stdio.h>

void main(void){



	int num;

	printf("Enter a number :: ");
	scanf("%d", &num);

	int firstNum = 1;
	int copyNum = num;
	while(num > 10){

		firstNum = firstNum * 10;
		num = num / 10;
	}

	printf("FirstNumber = %d\n", (copyNum / firstNum));
	printf("LastNumber = %d\n", copyNum % 10);


}
