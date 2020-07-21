#include<stdio.h>

void main(void){

	for (int i = 0; i<4; i++){

		for (int j = 0; j<4; j++){
		
			if(i == 0 && j == 0)
				printf("=  ");
			else if (i == 0 && j == 3)
				printf("=  ");
			else if (i == 3 && j == 3)
				printf("=  ");
			else if (i == 3 && j == 0)
				printf("=  ");
			else	
				printf("*  ");

		}
		
		printf("\n");
	}	
}
