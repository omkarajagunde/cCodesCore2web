// Take two numbers(hardcoded) and do the following operations on it and print the ans 

#include<stdio.h>

void main(void){

	int a = 10;
        int b = 5;

        int ans;

        ans = a & b;
        printf("ans AND: %d\n", ans);           // ans : 0000 => 0 in decimal
                                                // & being a bitwise AND operator returns value by anding a and b 's binary
        ans = a | b;
        printf("ans OR: %d\n", ans);            // ans : 1111 => 15 in decimal
                                                // || being a bitwise OR operator returns value by oring a and b 's binary                                               
        ans = ~a;
        printf("ans NEGATION: %d\n", ans);      // ans : -11
                                                // ~ being a bitwise NOT operator first flips the bits in binary and does 
						// 2s compement and returns the value by changing its polarity
						// a => 10 => 1010
						// step 1 : flip bits => 0101
						// step 2 : 2s compliment => 1011
						// step 3 : changing polarity as binary is saved in 2s compliment ...
						// ans => -11
	
	ans = a ^ b;
        printf("ans NEGATION: %d\n", ans);      // ans : 15
                                                // ^ being a bitwise XOR operator returns value by XORing a with b


	/********************************TRUTH TABLES*******************************
	 *
	 * 	AND			OR			XOR
	 * 	1	0 => 0		0	0 => 0		0	0 => 0
	 * 	0	1 => 0		1	0 => 1		1	0 => 1
	 * 	1	1 => 1		0	1 => 1		0	1 => 1
	 *	0	0 => 0		1	1 => 1		1	1 => 0
	 *
	 *
	 * *************************************************************************/
}
