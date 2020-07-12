#include <stdio.h>

void main(void){

	int a = 5, b = 8, ans = 0;

	ans = ++a + ++a; 		// In pre -increment a is returned
	printf("a:%d\tans:%d\n",a,ans);

}
