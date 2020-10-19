#include<stdio.h>

void main(void){

	int num;
	printf("Enter a number :: ");
	scanf("%d", &num);

	int arr[10];
	for (int i = 0; i<10; i++){

		*(arr +i) = (2 * (i+1));
	}

	for (int i = 0; i<10; i++)
		printf("%d\n", *(arr + i));

}
