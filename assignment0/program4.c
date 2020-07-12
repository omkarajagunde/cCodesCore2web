/*
 *Write a program that evalutes the following expression and explain the working
 *in comments. Assign any random value to the ‘a’ and ‘b’
 *
 */

#include<stdio.h>

void main(void){

      	int a = 5;
      	int b = 7;
	int ans;

	ans = ++a + ++b;
	//	6 +   8 
	printf("ans : %d\na : %d\nb : %d\n",ans,a,b);		// ans : 14	a : 6	b : 8

	      
}
