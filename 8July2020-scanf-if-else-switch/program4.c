#include<stdio.h>

void main(void){

	int x, y, z;
	printf("Enter 3 nums : ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y){
		if (x > z)
			printf("x is greater\n");
		else
			printf("z is greater\n");
	}else{
		if (y > z)
			printf("y is greater\n");
		else
			printf("z is greater\n");

	}
}
