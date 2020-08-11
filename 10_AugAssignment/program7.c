#include<stdio.h>

void main(void){

	int num1 = 0;
	printf("Enter a number :: ");
	scanf("%d", &num1);

	for (int i = 1; i<=num1; i++){

		for (int j = 1; j<=9; j++){
			
		if (i+j <= 5 || j-i >= 5)
			printf("\t");
		else if (j%2 != 0)
			printf("%d\t", 2 * (i-1));
		else 
			printf("%d\t", (j * (i-1)) - (i-1));
	
		}
		printf("\n");
	}
}
