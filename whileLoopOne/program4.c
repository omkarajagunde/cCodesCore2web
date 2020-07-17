#include<stdio.h>

void main(void){

	int num;
	printf("Enter a num :: ");
	scanf("%d", &num);

	int i = 1, sum = 0;
	while(i < num){

		if (num % i == 0)
			sum += i;
		i++;
	}

	if (sum == num)
		printf("%d is perfect number ...\n", num);
	else
		printf("%d is not a perfect number ...\n", num);
}
