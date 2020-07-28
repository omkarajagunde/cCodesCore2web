#include<stdio.h>

void main(void){

	for (int i = 0; i<5; i++){

		for (int j = 0; j<5; j++){

			if (j - i >= 0){
				printf("*  ");
			}else 
				printf("   ");
		}

		printf("\n");
	}
}
