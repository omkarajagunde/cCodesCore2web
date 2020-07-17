#include<stdio.h>

void main(void){

	int i = 1;

	while(i <= 50){

		if (i % 2 == 0){
			if (i % 5 == 0)
				printf("%d\n", i);
		}
		i++;
	}
}
