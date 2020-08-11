#include<stdio.h>

void main(void){

	int num1 = 0;
	int num2 = 0;

	printf("Enter row and col :: ");
	scanf("%d %d", &num1, &num2);

	for (int i = 1; i<=num1; i++){

		char ch = 'A' + (i-1);
		for (int j = 1; j<=num2; j++){

			if (i-j >= 1 || i+j >= num2 + 2)
				printf("\t");
			else if (i%2 == 0)
				printf("=\t");
			else 
				printf("%c\t", ch);

			ch++;
		}
		printf("\n");
	}
}
