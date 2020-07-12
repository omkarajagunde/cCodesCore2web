#include<stdio.h>

void main(void){

	int x, y;
	printf("Enter 2 Numbers : ");
	scanf("%d %d", &x, &y);

	printf("Enter one option:\n");
	printf("+\n");
	printf("-\n");
	printf("*\n");
	printf("/\n");
	printf("%c ---> ", '%');
	char ch;
	scanf(" %c", &ch);
	switch(ch){

		case '+':printf("add : %d\n",x + y);
			break;
		case '-':printf("sub : %d\n",x - y);
			break;
		case '*':printf("Mul : %d\n",x * y);
			break;
		case '/':printf("divide : %d\n",x / y);
			break;
		case '%':printf("Mod : %d\n",x % y);
			break;
		default:printf("Wrong Choice ... \n");
			break;	
	}
}
