#include<stdio.h>

void main(void){

	int i = 1;
	int n;
	printf("Enter a num :: ");
	scanf("%d", &n);

	int sum = 0, mul = 1;
	while(i<=n){

		if (i % 2 == 0)
			sum += i;
		else
			mul *= i;

		i++;
	}

	printf("Sum of all even numbers between 1 to %d: %d\n", n, sum);
	printf("Mul of all odd numbers between 1 to %d: %d\n", n, mul);
}
