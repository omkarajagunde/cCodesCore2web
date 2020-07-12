#include<stdio.h>

void main(void){
	
	int mathsMarks;
	int physicsMarks;
	int biologyMarks;
	int englishMarks;
	int marathiMarks;

	int grade;

	printf("Enter marks:\n");
	printf("Maths marks:");
	scanf("%d", &mathsMarks);
	printf("Physics marks:");
	scanf("%d", &physicsMarks);
	printf("Biology marks:");
	scanf("%d", &biologyMarks);
	printf("English marks:");
	scanf("%d", &englishMarks);
	printf("Marathi marks:");
	scanf("%d", &marathiMarks);

	float percentage = mathsMarks + marathiMarks +englishMarks +biologyMarks +physicsMarks;
	percentage = (percentage / 500) * 100;

	printf("percentage = %f\n\n", percentage);
	if (percentage > 65 && percentage <= 100)
		grade = 'A';
	else if (percentage >= 45 && percentage <= 65)
		grade = 'B';
	else if (percentage < 45 && percentage >= 35)
		grade = 'C';
	else if (percentage > 0 && percentage < 35)
		grade = 'D';

	switch(grade){

		case 'A':printf("FirstClass\n");
			 break;
		case 'B':printf("SecondClass\n");
			 break;
		case 'C':printf("PassClass\n");
			 break;
		case 'D':printf("Failed !\n");
			 break;
			 
	}
}
