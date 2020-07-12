#include<stdio.h>

void main(void){
	
	int a = 65;
	float b = 20.4;

	// This will give error as case can be only int, char is also 
	// internally ASCII of int type hence char is also valid
	switch(b){

		case 20.4: printf("In switch ...\n");
	}

	printf("In switch ...\n");
}	
