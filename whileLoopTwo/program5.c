#include<stdio.h>

void main(void){

	int LOWORD;
	int HIWORD;

	printf("Enter Lower bound of range: ");
	scanf("%d", &LOWORD);
	printf("Enter Higher bound of range: ");
	scanf("%d", &HIWORD);

	while (LOWORD <= HIWORD){
		printf("%d   ", LOWORD* LOWORD);
		LOWORD++;
	}
	printf("\n");
}
