#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    int ans;
    
    ans =  a++ * ++b / b++ * ++a + a++;		// 20 <- answer
    printf("%d\n",ans);    
    
    return 0;
    
}
