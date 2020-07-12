#include<stdio.h>

void main(void){

	int a,b;
	printf("Enter a & b number :");
	scanf("%d%d",&a, &b);

	//scanf("%d\n"); dont write like this ...
	printf("a = %d \na = %d\n",a,b);
	printf("adress of a = %p\nadress of b = %p\n",&a,&b);
	
}
