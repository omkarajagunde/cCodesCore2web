#include<stdio.h>

void main(void) {

	int aNum = 0;
	char aChar;

	/*
	 * aNum is 0 and !aNum is 1
	 * Hence if block here will  be executed ...
	 */
	if(!aNum){
		printf("Inside First If...\n");
		aNum += 20;				// aNum = 20
		aChar = 'T';				// aChar = 'T'
	}

	/*
	 * Here 20 % 4 != 0 is False 
	 * Hence this if block wont execute ...
	 */
	if(aNum % 4 != 0){
		printf("Inside Second If...\n");
		aNum -= 20;
		aChar = 'F';
	}

	/*
	 * aNum == 0 is False
	 * Hence this if block wont execute ...
	 */
	if(aNum == 0) {
		printf("Inside Third If...\n");
		aChar = 'T';
	}

	// This is outside if in main block hence will always execute ...
	printf("After all IF, Values Are..., %d & %c\n", aNum, aChar);
}
