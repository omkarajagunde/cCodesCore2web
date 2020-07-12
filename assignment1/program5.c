#include<stdio.h>

void main(void){

	float x=5.2, y=10.5;
	
	/**
	 *
	 *Here 5.2f == 5.2f is True hence if is evaluated
	 *and there is one statement only attached to it which gets
	 *evaluated
	 *
	 */
	if(x == 5.2f)
		printf("x : %f\n",x);		// 5.200000

	/**
	 *
	 *Here 10.5f == 10.5f is True but there is semicolon 
	 *just after ) bracket hence theif statement gets terminated
	 *and the next block {... } exceutes independently
	 *
	 */
	if(y == 10.5f);{

		printf("y : %f\n",y);		// 10.500000

	}
}
