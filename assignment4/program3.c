#include<stdio.h>

void main(void){

	for (int num = 1; num <= 50; ++num){
		if (50 % num == 0)
			printf("%d\n", num);
	}
}
