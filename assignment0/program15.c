// Write a C program to demonstrate output of following operator Statement.

#include<stdio.h>

void main(void){

	int a = 10;
	int b = 15;

	int ans;

	ans = a++ || ++b;
	//    10  || 16 => 1
	printf("ans : %d\n", ans);
	
	ans = --b && a--;
	//    15  && 11 => 1
        printf("ans : %d\n", ans);
	
	ans = (a++ || ++b) && (++a && ++b);
	//    (10  || 17)  && ( 12 && 18)
	//    	   1	   &&      1
	//    	   1
        printf("ans : %d\n", ans);	
	
	ans = (a++ || ++b) || (++a && ++b);
	//    (12  || 19)  || ( 14 && 20)
        //         1       &&      1
        //	   1
        printf("ans : %d\n", ans);
	
	ans = (a<10) && (++a && ++b);
	//     0     && (15  && 21)
	//     0
        printf("ans : %d\n", ans);
	
	ans = (++b>10) || (++a && ++b);
	//    (22 >10) || (16  && 23)
	//    1	       || 1
	//    1	
	printf("ans : %d\n", ans);
	
	ans = (++a != 10) || ++b;
	//    (17  != 1 ) || 24
	//    1
	printf("ans : %d\n", ans);
}
