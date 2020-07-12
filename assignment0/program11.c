//  Write a C program to demonstrate output of following operator Statement. 

#include<stdio.h>

void main(void){

	int a = 10;
	int b = 20;
	int ans;

	ans	=	a	>	2	+	b	!=	6;
	//	=	10	>	2	+	20	!=	6;
	//		10	>       22	!=	6
	//		0	!=	6
	//		1
	printf("ans : %d\n",ans);
}
