#include<stdio.h>

void main(void){

	int number=10;
	
	/*
	 * Here 10 != 0 && 10 > 0
	 * =	True 	&& True
	 * = 	True
	 *
	 * Hence this if block will get execute ...
	 */
	if(number!=0 && number>0){
		printf("%d is a positive no\n",number);		// 10
		number=-5;					// -5
	}
	
	/*
	 * Here -5 < 0 is True
	 * Hence this if block execute ...
	 */
	if(number<0 ){
		printf("%d is a negtive no\n",number);		// -5
		number=0;					// 0
	}

	/*
	 * Here number == 0 is True as the number is 0
	 * Hence the if block will execute ...
	 */
	if(number==0){
		printf("number is zero\n");
		number=15;					// 15
	}

	/*
	 * Here 15 % 4 == 0 is False
	 * Hence this if statement will not execute ...
	 * Also there is semicoln after ) bracket hence
	 * the next block {... } will execute independently...
	 */
	if(number%4==0);{
		printf("%d is divisible by 4\n",number);
	}
}
