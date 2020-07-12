#include<stdio.h>

void main(void){

	int tableVar;
	printf("Enter a num: ");
	scanf("%d", &tableVar);

	for (int num = 1; num<=10; num++)
		printf("%d  ", tableVar*num);
	
	printf("\n");
}
