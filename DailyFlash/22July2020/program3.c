#include<stdio.h>

void main(void){
	
	int i = 1, j, cnt = 1;
	

	while (i<6){

		j = 6;
		while (j > 0){


			if (i+j <= 6 ){
				printf("%d  ",i*j );
			}				
			j--;
		}
		cnt++;
		i++;
		printf("\n");
	}
}
