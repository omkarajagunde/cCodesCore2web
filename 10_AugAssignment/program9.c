#include<stdio.h>

void main(void){

	char ch;
	int num;

	int i = 1;
	int sum = 0;
	int copy;
	int mult = 1;
	int rem;
	do{

		printf("Enter a num::");
		scanf("%d", &num);
		copy = num;
		while (copy != 0){

			rem = copy % 10;
			while (rem != 0){
				mult *= rem;
				rem--;
			}
			sum += mult;
			mult = 1;
			copy /= 10;

		}

		if (sum == num)
			printf("%d is a Strong number \n", num);
		else
			printf("%d is not a Strong number \n", num);

		sum = 0;
		
		printf("Do you want to continue :: ");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y');
}	
