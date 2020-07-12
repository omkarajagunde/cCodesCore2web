#include<stdio.h>

void main(void){

	int x = 10;
 	int y = 20;

 	switch(x) {
 		
		// Here @ x and y there will be error,
		// becuase we cannot write the lvalue to the case, we have to
		// write the actual value here
		case x:
 			printf("Case 10\n");
 			printf("x= %d\n",x);
 			break;
 		case y:
 			printf("Case 20\n");
 			printf("y= %d\n",y);
 			break;
 		default:
 			printf("Default\n");
 			break;
	}

}
