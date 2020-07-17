#include<stdio.h>

void main(void){

	float i = 0;

	while(i<=100){

		printf("%3.0f\t->\t%6.3f\n", i, ((i-32) * 5/9));
		i++;
	}
}
