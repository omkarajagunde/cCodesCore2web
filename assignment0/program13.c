//  Write a C program to demonstrate output of following operator Statement.

#include<stdio.h>

void main(void){

	int a = 5;
	int b = 9;

	int ans;

	ans = 	a++	/	b--	+	a++	*	b++	+	b--	*	a--;
	//	5	/	9	+	a++	*	b++	+	b--	*	a--
	//	0	+	48	+	63
	//	
	//	ans = 111
	
	printf("ans : %d\na : %d\nb : %d\n", ans, a, b);
	ans	=	a++	-	b--	/	a++	*	b++	*	a--	+	b--	-	a--;
	//	=	6	-	8	/	7	*	7	*	8	+	8	-	7
	//	=	6	-	56	+	1
	//		
	//		ans = -49
	//	
	
	printf("ans : %d\na : %d\nb : %d\n", ans, a, b);

}
