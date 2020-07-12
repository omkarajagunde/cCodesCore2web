#include<stdio.h>

void main(void){

	int num=20;
	
	if(num >20){		// here 20 > 20 is False hence if is not executed
	
		printf(" num is greater than 20");
	}

	printf(" num : %d \n", num);	// This statement is outside if hence will always execute
}
