#include<stdio.h>

void main(void){

	int a = 5, b = 6, ans = 0;

	ans = a++ + a++ + a++ + a++;		//9	26
	printf("b:%d\tans:%d\n",a,ans);

	ans = b-- + b-- + b-- + b--;		//2	18
	printf("b:%d\tans:%d\n",b,ans);
}
