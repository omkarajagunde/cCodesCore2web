#include<stdio.h>
#define PI 3.14159

void main(void){

	int radius;
	printf("Enter radius of a circle to know its area :: ");
	scanf("%d", &radius);
	printf("Area is :: %d\n", PI*(radius*radius));
}
