#include<stdio.h>

void main(void){

	int num1, num2, num3;

	printf("Enter 3 nums : ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	if (num1 > num2 && num1 > num3)
		if (num1 % 2 == 0)
			printf("The largest Number amongst %d, %d & %d is %d & %d is an EvenNumber\n", num1, num2, num3, num1, num1);
		else
			printf("The largest Number amongst %d, %d & %d is %d & %d is an OddNumber\n", num1, num2, num3, num1, num1);
	else if (num2 > num1 && num2 > num3)
                if (num2 % 2 == 0)
                        printf("The largest Number amongst %d, %d & %d is %d & %d is an EvenNumber\n", num1, num2, num3, num2, num2);
                else    
                        printf("The largest Number amongst %d, %d & %d is %d & %d is an OddNumber\n", num1, num2, num3, num2, num2);
	else
		if (num3 % 2 == 0)
                        printf("The largest Number amongst %d, %d & %d is %d & %d is an EvenNumber\n", num1, num2, num3, num3, num3);
                else
                        printf("The largest Number amongst %d, %d & %d is %d & %d is an OddNumber\n", num1, num2, num3, num3, num3);

}
