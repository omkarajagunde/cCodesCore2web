//  Write a C program to demonstrate output of following operator Statement. (Assumed: num1=1, num2=3, num3=0)

#include<stdio.h>

void main(void){

	int num1 = 1;
	int num2 = 3;
	int num3 = 0;

	num3	=	num2 	<< 	num1;
	//	=	3	<<	1
	//
	//		128	64	32	16	8	4	2	1
	//
	//		0	0	0	0	0	0	1	1
	//		0	0	0	0	0	1	1	0
	//
	//		num3 = 6
	
	num2	=	num3	*	num2	*	(++num1);
	//		6	*	3	*	2
	//
	//		num2 = 36
	
	printf("num3 : %d\nnum2 : %d\n", num3, num2);
}
