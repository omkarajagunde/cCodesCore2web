#include<stdio.h>

void main(void){

	void 	findOddNums(int);
	int row = 3;
	int col = 3;

	int arr[3][3];

	for (int i = 0; i<3; i++){

		for (int j = 0; j<3; j++){

			printf("\nEnter num @pos arr[%d][%d] :: ", i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for (int i = 0; i<3; i++){

		for (int j = 0; j<3; j++){

			findOddNums(*(*(arr+i)+j));
		}
	}
}

void findOddNums(int num){

	if (num % 2 != 0)
		printf("%d\t", num);
	printf("\n");
}

