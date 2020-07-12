#include<stdio.h>

void main(void){

	float a = 5.2;
	
	// here float 5.2 is typeCasted forcefully,
	// to int hech data type shortening is done,
	// so now 5.2 => become 5 as integer and
	// case 5 is found so 'five' is executed ...
 	switch((int)a){

 		case 1:
 			printf("one\n");
 			break;

 		case 5:
 			printf("five\n");
 			break;

 		case 2:
 			printf("two\n");
 			break;

 		default:

 			printf("else\n");
 			break;

 	}
}
