#include<stdio.h>

void main(void){

	int mks;
	printf("Enter mks :: ");
	scanf("%d", &mks);

	switch(mks){

		case 90 ... 100:printf("Grade A\n");
				break;
		case 80 ... 90:printf("Grade B\n");
				break;
		case 70 ... 80:printf("Grade C\n");
				break;
		case 60 ... 70:printf("Grade D\n");
				break;
		case 40 ... 60:printf("Grade E\n");
				break;
		case 0 ... 40:printf("Grade F\n");
				break;
		
	}
}
