#include<stdio.h>

void main(void){

	int num;
	
	printf("Enter time in minutes :: ");
	scanf("%d", &num);

	int hrs = num / 60;
	printf("%d Hrs and %d minutes\n\n", hrs, num - hrs*60);	


}
