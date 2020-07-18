#include<stdio.h>

void main(void){

	int num, rev = 0, rem;
	printf("Enter a num :: ");
	scanf("%d", &num);

	while (num != 0){

		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}

	printf("reverse num is :: %d\n", rev);
}
