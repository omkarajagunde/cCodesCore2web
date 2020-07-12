#include<stdio.h>

int main(void){

	int x = 2;
	
	// here 2 << 3 will happen
	// which is 0000 or 0 in decimal
	// hence 0th case is not present
	// so defualt case will be executed 
	// and becuase default case does not have
	// break; case 1 will also execute and
	// '1' will also get printed ...
	switch(x << (x + 1)) {
 			
		default:
 			printf("\ndefault");
 		case 0:
 			printf("\n0");
 			break;
 		case 2:
 			printf("\n2");
 			break;
 		case 3:
 			printf("\n3");
 			break;
 		case 4:
 			printf("\n4");
 			break;
 		case 8:
 			printf("\n8");
 			break;
	}
	return(0);
}
