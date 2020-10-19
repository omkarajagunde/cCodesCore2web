#include<stdio.h>

void main(void){

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

			if (*(*(arr+i)+j) % 2 == 0)
				*(*(arr+i)+j) = 0;	
		}
	}

	for (int i = 0; i<3; i++){
        
                for (int j = 0; j<3; j++){
                
                       	printf("%d\t", *(*(arr+i)+j));
                }
		printf("\n");
        }

}
