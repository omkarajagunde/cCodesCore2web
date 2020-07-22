#include<stdio.h>

void main(void){

	int i = 0, j;
	char ch = 'a';

	while (i < 4){
	
		j = 0;
		while (j < 4){

			if (i+j >= 3){
				printf("%c  ", ch);
				ch++;
			}else
				printf("   ");
			j++;
		}
		ch = 'a';
		printf("\n");
		i++;

	}	
}
