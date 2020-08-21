#include<stdio.h>

void main(void){

	int units;
	int total = 0;
	printf("Enter how many units");
	scanf("%d", &units);

	if (units > 50){
		
		total += (50 * 0.50);
		units -= 50;
	}
	if (units > 100){

                total += (100 * 0.75);
                units -= 100;
        }
	if (units > 100){

                total += (100 * 1.20);
                units -= 100;
        }
	if (units > 250){

                total += (units * 1.50);
        }

	printf("Total amount :: %d\n", total);
}
