#include<stdio.h>

void main(void){
	
	int a = 65;
	int b = 66;

	// Here a = 65 hence case 'A' is executed and becuase there is
	// no break case 'B' is also executed
	// Also notice that a is int and case is 'A' still that works
	// so that is the proof that 'A' will be internally evaluated 
	// to int
	switch(a){

		case 'A': printf("In switch case 'A' ...\n");
		case 'B': printf("In switch case 'B' ...\n");
	}

	printf("outside switch ...\n");
}	
