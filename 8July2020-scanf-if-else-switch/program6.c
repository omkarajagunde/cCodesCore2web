#include<stdio.h>

void main(void){

	printf("Enter one option:\n");
	printf("1] Le Meredian\n");
	printf("2] Taj Hotel\n");
	printf("3] Blue Diamond\n");
	printf("4] Hayaat \n");
	printf("	  		---> ");
	int ch;
	scanf(" %d", &ch);
	switch(ch){

		case 1:printf("Le Meredian\n");
			break;
		case 2:printf("Taj Hotel\n");
			break;
		case 3:printf("Blue Diamond\n");
			break;
		case 4:printf("Hayaat \n");
			break;
		default:printf("Wrong Choice ... \n");
			break;	
	}
}
