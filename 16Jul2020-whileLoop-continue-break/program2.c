#include<stdio.h>

void main(void){

	int num,rem = 0, sum = 0;
	printf("Enter a num :: ");
	scanf("%d", &num);

	while(num != 0){

		rem = num % 10;
		sum += rem;
		num /= 10;
	}

	printf("The sum is :: %d\n", sum);
}
