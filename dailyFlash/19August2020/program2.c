#include<stdio.h>

void main(void){

	int i,p,r,t;
	printf("Enter amount :: ");
	scanf("%d", &p);
	printf("Enter annual rate of interest :: ");
	scanf("%d", &r);
	printf("Enter time invested :: ");
	scanf("%d", &t);

	printf("Simple Interest I : %d\n", p*r*t);
}
