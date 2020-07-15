#include<stdio.h>

void main(void){

	int i = 97;

	for (;i<=122;i++)
		printf("In For Loop\n");
		printf("%c\n", i);		// This is out of for and will get printed only Once ...
}
