#include<stdio.h>

void main(void){
	
	int x = 10;
	int y = 5;
	int z = 2;
	int ans;

	// | operator						// By Truth Table of OR
	ans = x | y;						// 1010 | 0101 = 1111
	printf("X | y : %d\n",ans);	
	ans = x | y | z;					// 1010 | 0101 | 0010 = 1111
	printf("X | y | z : %d\n",ans);	
	ans = x | y | 2;					// 1010 | 0101 | 0010 = 1111
	printf("X | y | 2 : %d\n",ans);	
	

	x = 10;
        y = 15;
        z = 5;

        // | operator                                           // By Truth Table of OR
        ans = x | y;                                            // 1010 | 1111 = 1111
        printf("X | y : %d\n",ans);
        ans = x | y | z;                                        // 1010 | 1111 | 0101 = 1111
        printf("X | y | z : %d\n",ans);
        ans = x | y | 2;                                        // 1010 | 0101 | 0010 = 1111
	printf("X | y | 2 : %d\n",ans);	
}
