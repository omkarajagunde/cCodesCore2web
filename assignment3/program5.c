#include<stdio.h>

int main(void){

	int a;
 	
	// sizeof(int) returns size_t type which
	// is unsigned long long int on 64 bit
	// and unsigned int on 32 bit so comparing
	// unsigned long long int with signed int 
	// returns boolean 0 hence case 0 is
	// executed ...
	switch(a = (sizeof(int) > -1)){
 	
		case 1: printf("True\n");
 			break;
 		case 0: printf("False\n");
 			break;
 	}
 	return 0;
}
