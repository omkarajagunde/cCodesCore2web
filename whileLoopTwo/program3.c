#include<stdio.h>

void main(void){

	int num, flag = 0;
	printf("Enter a num :: ");
	scanf("%d", &num);

	if (num % 2 == 0)
		flag = 1;
	
	while (num >= 0){

		if (flag == 1)
			printf("%d   ", num--);
		else{
			printf("%d   ", num);
			num -= 2;
		}
	}
		
	printf("\n");
}
