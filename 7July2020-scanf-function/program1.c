#include<stdio.h>

void main(void){

	int a;
	printf("Enter a number :");
	scanf("%d",&a);

	//scanf("%d\n"); dont write like this ...
	printf("a = %d\n",a);
	printf("adress of a = %p\n",&a);
}
