#include<stdio.h>

void main(void){

	int weight=50;
	
	/*
	 *
	 * Here 50 < 50 && 50 > 30
	 * =	False   && True
	 * =	False
	 *
	 * Hence the if block here is not executed ...
	 */
	if(weight<50 && weight >30){
		printf("You are under weight\n");
	}

	/*
	 *
	 * Here 50 >= 50 && 50 <= 70
	 * =	True	 && True
	 * = 	True
	 *
	 * Hence this if block is executed ...
	 */
	if(weight>=50 && weight <= 70){
		printf("you are well maintained\n");	// gets printed
	}

	/*
	 *
	 * Here 10 > 70 != True
	 * Hence if wont execute also there is semicolon after ) bracket
	 * hence the next block {... } will get executed independently
	 */ 
	if(weight > 70);{
		printf("you are overweight you have to work hard\n");	// gets printed
	}

}
