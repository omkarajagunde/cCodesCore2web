#include<stdio.h>

void main(void){

	for (int i = 0; i<=5; i++){

		for (int j = 0; j<=5; j++){

			if (i+j <= 5){
				printf("%d  ", j+1);
			}
		}
		printf("\n");
	}
}
