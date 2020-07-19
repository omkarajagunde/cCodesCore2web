#include<stdio.h>

void main(void){

	int num;
	printf("Enter days remaining to submit the assignment :: ");
	scanf("%d", &num);

	while(num > 0){

		printf("%d days remaining \n", num--);
	}
	printf("%d days Assignment is Overdue\n",num);
}
