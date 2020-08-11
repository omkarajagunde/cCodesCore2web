#include<stdio.h>

void main(void){

	char ch;
	int num;

	int i = 1;
	int sum = 0;
	do{

		printf("Enter a num::");
		scanf("%d", &num);
		while (i < num){

			if (num % i == 0)
				sum = sum + i;
			i++;

		}

		if (sum == num)
			printf("%d is a perfect number \n", num);
		else
			printf("%d is not perfect number \n", num);

		sum = 0;
		i = 1;
		printf("Do you want to continue :: ");
		scanf(" %c", &ch);
	}while(ch == 'y' || ch == 'Y');
}	
