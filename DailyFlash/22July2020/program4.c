#include<stdio.h>

void main(void){

	int i = 0, j;
	int cnt  = 1;

	while (i < 4){
	
		j = 0;
		while (j < 4){

			if (i+j >= 3){
				printf("%d   ", cnt);
				cnt++;
			}else
				printf("  ");
			j++;
		}

		printf("\n");
		i++;

	}	
}
