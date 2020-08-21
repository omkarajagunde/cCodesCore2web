#include<stdio.h>

void main(void){

	char ch;
	printf("M or F ?");
	scanf("%d", &ch);
	int age;

	switch(ch){

		case 'M'
		case 'm':
			printf("Enter age :: ");
			scanf("%d", &age);
			switch(age){

				case 20 ... 40:printf("M can work anywhere \n");
					       break;
				case 40 ... 60:printf("M can work in Urban area \n");
					       break;
				default:printf("Age should be between 20 -60 ...\n");
			}

		case 'F':
		case 'f':
			printf("F can work in Urban area\n");
			break;
		default:printf("Wrong gender provided ...\n");


	}
}
