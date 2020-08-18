#include<stdio.h>

void main(void){

	int num;
	printf("Enter month :: ");
	scanf("%d", &num);

	switch(num){

		case 1:printf("Jan 31 days\n");
		       break;
		case 1:printf("Feb 28 -29 days\n");
		       break;
		case 1:printf("March 30 days\n");
		       break;
		case 1:printf("April 31 days\n");
		       break;
		case 1:printf("May 30 days\n");
		       break;
		case 1:printf("Jun 31 days\n");
		       break;
		case 1:printf("Jul 30 days\n");
		       break;
		case 1:printf("Aug 31 days\n");
		       break;
		case 1:printf("Sept 30 days\n");
		       break;
		case 1:printf("Oct 31 days\n");
		       break;
		case 1:printf("Nov 30 days\n");
		       break;
		case 1:printf("Dec 31 days\n");
		       break;
		default:printf("Not a valid month count\n");
	}
}
