#include<stdio.h>

void main(void){

	int num;

	printf("enter num:");
	scanf("%d",&num);

	int ans = ++num + ++num;
	printf("ans:%d\n",num);
}
