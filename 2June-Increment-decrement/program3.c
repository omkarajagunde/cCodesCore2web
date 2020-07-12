#include<stdio.h>

void main(void){

	int a = 5, b = 8, ans = 0;

	ans = --b + --b + --b;		// left to right evaluation 1st (--b + --b then anser of this added to last --b)
	printf("b:%d\tans:%d\n",b,ans);
}
