#include<stdio.h>

void main(void){

	int start;
	int end;
	
	printf("Enter Start :: ");
	scanf("%d", &start);
	printf("Enter End :: ");
        scanf("%d", &end);

	int copy;
	int rev = 0;
	int rem;
	while (start <= end){

		copy = start;
		while (copy != 0){

			rem = copy % 10;
			rev = rev * 10 + rem;
			copy /= 10;
		}
		if (start == rev)
			printf("%d\t", start);
		rev = 0;
		start ++;
	}
	printf("\n");
}
