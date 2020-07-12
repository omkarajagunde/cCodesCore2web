//Write a program that evalutes the following expression and explain the working in comments. Assign any random value to the ‘a’ and ‘b’ and print the ans.

#include<stdio.h>

void main(void){

	int a = 8;
	int b = 10;
	int ans;

	ans = ++a 	+ 	++a 	/ 	++b 	* 	a++ 	- 	b++;
	//    ++a	+ 	((9	/	11)	*	9)	-	11
	//    11	+	(0	*	9)	-	11
	//    11	+	0	-	11
	//    ans  => 0
	printf("ans : %d\na : %d\nb : %d\n",ans,a,b);		// ans : 0 	a : 11	b : 12

}
