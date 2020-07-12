// Write a C program to demonstrate output of following operator Statement.

#include<stdio.h>

void main(void){

	int a = 10;
	int b = 5;

	a = a ^ b;
	// a = 1010 XOR 0101 => 1111 => 15
	b = a ^ b;
	// b = 1111 XOR 0101 => 1010 => 10
	a = a ^ b;
	// a = 1111 XOR 1010 => 0101 => 5
	
	printf("a : %d\nb : %d\n",a,b);
}
