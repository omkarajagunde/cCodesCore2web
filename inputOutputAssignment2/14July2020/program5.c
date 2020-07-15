#include<stdio.h>

void main(void){

	int i = 97;
	long long counter = 0;
	// i stopped at 97 -> 19167803
	for (;i<=122;){

		printf("%d -> %lld\n", i, counter++);
	}
}
