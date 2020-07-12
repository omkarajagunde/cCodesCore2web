#include<stdio.h>

void main(void){

	int a = 5, b = 8, ans = 0;

	ans = ++a + ++a + ++a;
	printf("b:%d\tans:%d\n",a,ans);

	ans = --b + --b + --b;	
	printf("b:%d\tans:%d\n",b,ans);
}
