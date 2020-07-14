#include<stdio.h>

void main(void){

	int hrs;
	int min;

	printf("Enter in hrs :: ");
	scanf("%d", &hrs);
	printf("Enter in min :: ");
	scanf("%d", &min);

	printf("Tital mins :: %d\n", hrs * 60 + min);

	
}
