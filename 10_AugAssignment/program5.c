#include<stdio.h>

void main(void){
	
	int prevTerm = 0;
	int currentTerm = 1;
	int nextTerm;
	int row;
	printf("Enter a Row::");
	scanf("%d", &row);

	for (int i = 0; i<row; i++){

		for (int j = 0; j <=i; j++){

			printf("%d\t", prevTerm);
			nextTerm = currentTerm + prevTerm;
			prevTerm = currentTerm;
			currentTerm = nextTerm;
		}

		printf("\n");
	}

}
