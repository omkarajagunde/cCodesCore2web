// Take values (hardcoded) and do the following operations

#include<stdio.h>

void main(void){

	int a = 10;
	int ans;

	ans = a << 3;
	//    10 << 3
	//			128 64 32 16	8 4 2 1	
	//					
	//    10 => 		0   0  0  0	1 0 1 0
	//    shift by 1	0   0  0  1	0 1 0 0
	//    shift by 2	0   0  1  0	1 0 0 0
	//    shift by 3	0   1  0  1	0 0 0 0
	//
	//    		ans =>  80
	printf("ans a << 3 : %d\n",ans);

	ans = a >> 3;
        //    10 << 3
        //                      128 64 32 16    8 4 2 1
        //
        //    10 =>             0   0  0  0     1 0 1 0
        //    shift by 1        0   0  0  0     0 1 0 1
        //    shift by 2        0   0  0  0     0 0 1 0
        //    shift by 3        0   0  0  0     0 0 0 1
        //
        //              ans =>  1 all bits beyond 2 raised to 0 are discarded ...
        printf("ans a >> 3 : %d\n",ans);
}
