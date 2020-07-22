#include<stdio.h>


void main(void){

	int num;

	printf("Enter a number to check Strong number :: ");
	scanf("%d", &num);

	int fact = 1, sum = 0;
	int rem;
	int cpyNum = num;
	
	while(num != 0){
		fact = 1;
		rem = num % 10;
		
		while (rem != 0){
			fact *= rem;
			rem--;
		}
		sum += fact;
		num /= 10;
	}
	if (cpyNum == sum){
		printf("%d is a StrongNumber ...\n", cpyNum);
	}else{
		printf("%d is not a StrongNumber ...\n", cpyNum);
	}


}
