# include <stdio.h>

void main(void){

	int a = 10;
	int b = 20;

	int ans;

	ans = a + b;
	printf("%d\n",ans);

	ans = a - b;
	printf("%d\n",ans);

	ans = a * b;
	printf("%d\n",ans);

	ans = a + b - a / b * a *a + a * b;
	// a + b - ((a / b) * (a *a)) + (a * b)
	printf("%d\n",ans);
}
