#include<stdio.h>

void main(void){

	int angleOne;
	int angleTwo;
	int angleThree;

	printf("Enter 3 angles of a triangle :: ");
	scanf("%d%d%d", &angleOne, &angleTwo, &angleThree);

	printf("The angles are %s\n", (angleOne + angleTwo + angleThree) == 180 ? "valid" : "invalid");
}
