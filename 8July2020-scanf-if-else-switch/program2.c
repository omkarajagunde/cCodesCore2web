#include<stdio.h>

void main(void){

	int x, y;
	char ch;

	printf("Enter char operator : ");
	scanf("%c", &ch);
	printf("Enter 2 values : ");
	scanf("%d %d", &x, &y);

	// ch if we think we can give operator at runtime, then there is a 
	// error as operator cannot be substituted at RunTime ...
	if (x ch y)
		printf("X is greater\n");
	printf("Out of if...\n");
}
