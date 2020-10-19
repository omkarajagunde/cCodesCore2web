#include<stdio.h>

void main(void){

	int students = 5;
	int subjects = 3;
	int arr[students][subjects];

	for (int i = 0; i<students; i++){

		for (int j = 0; j<subjects; j++){

			printf("\nStudent %d Subject %d marks :: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}

	int max = 0;
	for (int i = 0; i<students; i++){
		for (int j = 0; j<subjects; j++){
			if (arr[i][j]>max)
				max = arr[i][j];	
		}
		printf("Student %d has max mks :: %d\n",i+1 ,max);
		max = 0;
	}
}
