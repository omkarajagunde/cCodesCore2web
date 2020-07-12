// Take two numbers from user and do the following operations on it and print the ans.

#include<stdio.h>

void main(void){

	int a = 10;
	int b = 20;

	int ans;

	ans = a && b;
	printf("ans AND: %d\n", ans);		// ans : 0
						// && being a logical operator returns 1 if both a and b is number
						// other than 0 ...
	ans = a || b;
	printf("ans OR: %d\n", ans);		// ans : 1
						// || being a logical operator returns 1 if either of both a and b is number other 						  // 0
	
	ans = !a;
        printf("ans NEGATION: %d\n", ans);      // ans : 0
                                                // ! being a logical operator returns 0 if a is any number
                                                // other than 0 ...else if a is 0 returns 1
}
