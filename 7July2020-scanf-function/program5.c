#include<stdio.h>

void main(void){

	int a,b;
	int ans;

	printf("Enter a & b : ");
	scanf("%d%d",&a,&b);

	//add
	ans = a + b;
	printf("addition = %d\n", ans);
	
	//sub
	ans = a - b;
	printf("subtraction = %d\n", ans);
	
	//mult
	ans = a * b;
	printf("multiplication = %d\n", ans);
	
	//div
	ans = a /  b;
	printf("division = %d\n", ans);
	
}
