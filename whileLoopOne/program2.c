#include<stdio.h>

void main(void){

	int num;
	printf("Enter a num :: ");
	scanf("%d", &num);
	int digitCounter = 0;

	while(num != 0){
		
		digitCounter++;
		num /= 10;
	}

	printf("%d\n", digitCounter);

}
