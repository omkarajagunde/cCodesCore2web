#include<stdio.h>

void main(void){
	
	int a=10,b=20;
	
	/**
	 *	
	 *	(10 && 20) && (10 || 22)
	 *=	True && True
	 *=>	True
	 *
	 */
	if((a && b++) && (a++ || ++b)){
		
		printf("a : %d\n",a);	// 11
		printf("b : %d\n",b);	// 21 here 21 bcoz a++ || ++b  here a++ is > 0 hence
					// hence true therefore ++b will not evaluated ...
	}

	// THis statement will execute always as it is outside if ...
	printf("out of if");
}
