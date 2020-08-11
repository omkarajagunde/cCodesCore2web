#include<stdio.h>

void main(void){

	char ch = 'A';
	int a = 10;
	float f = 20.5f;

	if (sizeof(ch) == 1)
		printf("%c is a character\n", ch);
	else if (sizeof(a) == 4)
		printf("%d is a integer\n", a);
	else if (sizeof(f) == 4)
		printf("%f is a FLoat\n", f);

}
