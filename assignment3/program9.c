#include<stdio.h>

void main(void){

	int monthNum;
	printf("Enter month :: ");
	scanf("%d", &monthNum);

	switch(monthNum){

		case 1:printf("Jan is 31 days\n");
		       break;
		case 2:printf("Feb is 28/29 days\n");
		       break;
		case 3:printf("March is 31 days\n");
		       break;
		case 4:printf("April is 30 days\n");
		       break;
		case 5:printf("May is 31 days\n");
		       break;
		case 6:printf("June is 30 days\n");
		       break;
		case 7:printf("July is 31 days\n");
		       break;
		case 8:printf("Aug is 30 days\n");
		       break;
		case 9:printf("Sept is 31 days\n");
		       break;
		case 10:printf("Oct is 30 days\n");
		       break;
		case 11:printf("Nov is 30 days\n");
		       break;
		case 12:printf("Dec is 31 days\n");
		       break;
		default:printf("Enter a valid month number ...\n");
		       break;
	}
}
