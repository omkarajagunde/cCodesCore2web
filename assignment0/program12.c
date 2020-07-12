// Write a C program to demonstrate output of following operator Statement.

#include<stdio.h>

void main(void){
	
	int n = 5;
	int ans;

	ans = n*(n+1)/2+n*(n+1)*(2*n+1)/6;
	//  = 5*(5+1)/2+5*(5+1)*(2*5+1)/6;
	//  = 5*6/2+5*6*11/6;
	//  = 30/2+330/6
	//  = 15+55
	//  = 70					// left to right evaluation as '*', '/', '%' has equal precedence
	printf("ans : %d\n", ans);
}
