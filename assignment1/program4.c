#include<stdio.h>
#include<stdbool.h>
void main(void){

	bool val=false, var=true;
	
	if(val);{			// val is false hence if is evaluated false and 
					// there is semicolon just after closing bracket
					// hence if statment here gets terminated and 
					// next {... } block execautes independently
		
		printf("true");		// true
	}

	if(var){			// var is true hence if is evaluated as true 
					// and further block {... } is executed
	
		printf("false");	// false
	}
}
