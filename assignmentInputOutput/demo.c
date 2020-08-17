#include<stdio.h>

void main(void){


	for (int i = 0; i <5; i++){
		
		for (int j = 0; j<5; j++){

			if (i == 0 || i == 4)
				printf("%d  ", 5-j);
			else
				printf("%d  ", j+1);
		}
		printf("\n");
	}	

}
