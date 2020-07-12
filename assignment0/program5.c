/*
 *Write a program that evalutes the following expression and explain the working
 *in comments. Assign any random value to the ‘a’ and ‘b’
 */

#include<stdio.h>

void main(void){
	
	int a = 10;
	int b = 4;
	int ans;

	ans = a++ + a++;
	//    10  + 11
	printf("ans : %d\na : %d\nb : %d\n",ans,a,b);		// ans : 21	a : 12	b : 4

}
