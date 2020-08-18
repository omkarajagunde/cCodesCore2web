#include<stdio.h>

void main(void){

	int day;
	printf("Enter a day ::");
	scanf("%d", &day);

	switch(day){
		
		case 0:printf("Mon\n");
		       break;
		case 1:printf("Tue\n");
		       break;
		case 2:printf("Wed\n");
		       break;
		case 3:printf("Thurs\n");
		       break;
		case 4:printf("Fri\n");
		       break;
		case 5:printf("Sat\n");
		       break;
		case 6:printf("Sun\n");
		       break;
		default:printf("Not a valid day | Try again!");
	}
}
