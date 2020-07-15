#include<stdio.h>

void main(void){

	int num;
	int flag = 0;
	printf("Enter a num :: ");
	scanf("%d", &num);

	for (int i = 2; i<=num/2; i++){

		if (num % i == 0)
			flag = 1;
	}

	if (flag == 0)
		printf("The number is prime number\n");
	else	
		printf("The number is not a prime number\n");
}
