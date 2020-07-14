#include<stdio.h>

void main(void){

	int num;
	long numTwo;
	float numThree;
	double numFour;
	long long numFive;
	char ch;

	printf("Enter num :: ");
	scanf("%d", &num);
	printf("Int is %d\n", num);

	printf("Enter long :: ");
	scanf("%ld", &numTwo);
	printf("Long is %ld\n", numTwo);

	printf("Enter long -long :: ");
	scanf("%lld", &numFive);
	printf("Long -Long is %lld\n", numFive);

	printf("Enter float :: ");
	scanf("%f", &numThree);
	printf("Float is %f\n", numThree);

	printf("Enter double :: ");
	scanf("%lf", &numFour);
	printf("Double is %lf\n", numFour);

	printf("Enter char :: ");
	scanf(" %c", &ch);
	printf("Char is %c\n", ch);

}
