#include<stdio.h>

void main(void){

	int x, y;

	printf("Enter 2 values : ");
	scanf("%d %d", &x, &y);

	if (x > y)
		printf("X is greater\n");
	printf("Out of if...\n");
}
