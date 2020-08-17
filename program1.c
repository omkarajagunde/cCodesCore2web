#include<stdio.h>

void main(void){

	float radius;
	printf("Enter radius :: ");
	scanf("%d", &radius);

	printf("Area or circle :: %f\n", 3.1415 * (radius * radius));
	printf("Circumference or circle :: %f\n", 2 * 3.1415 * radius );
}
