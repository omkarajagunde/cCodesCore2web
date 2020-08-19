#include<stdio.h>

void main(void){

	int a,b,c;
	printf("Enter 3 sides :: ");
	scanf("%d%d%d", &a, &b, &c);

	printf("Traingle %s the Pythagoras Theorem\n", (a*a + b*b == c*c)? "satisfies":"does not satisfies");
}
