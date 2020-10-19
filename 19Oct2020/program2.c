#include<stdio.h>

void main(void){

	int arr[100][100];

	int row;
	int col;

	printf("Enter row::");
	scanf("%d", &row);

	printf("Enter col::");
	scanf("%d", &col);

	for (int i = 0; i<row; i++)
		for (int j = 0; j<col; j++){

			printf("Enter @pos arr[%d][%d] :: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}

	for (int i = 0; i<row; i++){

		for (int j = 0; j<col; j++)
			printf("%d\t", *(*(arr+i)+j));

		printf("\n");
	}
}
