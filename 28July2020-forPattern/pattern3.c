#include<stdio.h>

void main(void){

	char ch = 'A';
	for (int i = 0; i<5; i++){

		for (int j = 0; j<5; j++){

			if (j - i >= 0){
				printf("%c  ", ch);
				ch++;
			}else 
				printf("   ");
		}

		ch = 'A';
		printf("\n");
	}
}
