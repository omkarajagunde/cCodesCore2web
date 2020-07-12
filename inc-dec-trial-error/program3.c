#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    int ans;
    

    ans =  a++ - b-- / a++ * b++ * a-- + b-- - --a;	// -15 <- answer
    	 //3   -(5   / 4)  * 4   * 5   + 5   -   5
	 //3   - 20 + 5 - 3
	 //-17 + 5 -3
	 //-15 <- answer ...
    printf("%d\n",ans);    


    return 0;
    
}
