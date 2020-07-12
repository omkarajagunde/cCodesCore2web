# include <stdio.h>

void main(void){
	
	int a = 5, b = 6, ans;

	ans = a++ + + + + ++b;
	//          ^ ^ ^ => these plus are discarded ... by tokeniser
	printf("%d\n",ans);
}
