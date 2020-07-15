#include<stdio.h>

void main(void){

	float a, b;

	printf("Enter Two Float nums :: ");
	scanf("%f%f", &a, &b);

	printf("The Entered Number up to second precision are: %.2f & %.2f\n", a, b);
	printf("Addition :: %.2f\n", a + b);
	printf("Subtraction :: %.2f\n", a - b);
	printf("Multiplication :: %.2f\n", a * b);
	printf("Division :: %.2f\n", a / b);
	
}
