#include<stdio.h>

void main(void){

	int a,b;
	printf("Enter a number :");
	scanf("%d",&a);
	printf("Enter b number :");
	scanf("%d",&b);


	//scanf("%d\n"); dont write like this ...
	printf("a = %d\n",a);
	printf("adress of a = %p\n",&a);
	printf("b = %d\n",a);
	printf("adress of b = %p\n",&b);
}
