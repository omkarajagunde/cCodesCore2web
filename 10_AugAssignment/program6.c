#include<stdio.h>

void main(void){

	int row;
	printf("Enter a row count :: ");
	scanf("%d", &row);

	for (int i = 0; i<row; i++){

		for (int j = 0; j<row; j++){

			if (j-i >= 0){

				printf("%d\t", (i + j) * j);
			}else
				printf("\t");
		}
		printf("\n");
	}	
}
