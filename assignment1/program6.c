#include<stdio.h>

void main(void){

	int subVal=15;

	/*
	 *
	 * Here 15 && 16 
	 * =	True && True
	 * => 	True
	 * 
	 * Hence the if statment is executed 
	 */	
	if(subVal++ && subVal--)
		printf("SubVal : %d\n",subVal);		// 15

	/*
	 *
	 * Here 15 || ++subVal
	 * =	True || ++subVal
	 * =>	True
	 *
	 * Hence the if statement is excuted as one True is got
	 */
	if(subVal-- || ++subVal)
		printf("SubVal : %d\n",subVal);		// 14

	/*
	 *
	 * Here 14 > 14 != True
	 * Hence if statement wont excute and also after ) bracket
	 * there is semicolon which terminates the if statement hence
	 * the next block {... } is executed independently
	 */
	if(subVal > subVal);{

		printf("SubVal : %d\n",subVal);		// 14
	}
}
