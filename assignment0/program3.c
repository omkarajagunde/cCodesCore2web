/*
 *
 *Write a program that take two number (hardcoded) . Do the multiplication and
 *division of that variable and print it
 */

#include<stdio.h>

void main(void){

	int x = 8;
	int y = 4;
	int ans;

	ans = x / y;
	printf("division : %d\n", ans);				// '/' is operator and x, y is operand
								// '/' is a binary operand
	ans = x * y;
        printf("multiplication : %d\n", ans);                   // '*' is operator and x, y is operand
                                                                // '*' is a binary operand
}
