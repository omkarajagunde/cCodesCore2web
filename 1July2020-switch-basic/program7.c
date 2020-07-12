#include<stdio.h>

void main(void){

	int a;
	printf("Enter a number below 5 ...");
	scanf("%d", &a);

	switch(a){

		case 1:{
			printf("One\n");
			break;
		       }
		case 4:{
			printf("Four\n");
			break;
		       }
		case 2:{
			printf("Two\n");
			break;
		       }
		case 3:{
			printf("Three\n");
			break;
		       }
	}

	printf("Outside Switch ...\n");
}
