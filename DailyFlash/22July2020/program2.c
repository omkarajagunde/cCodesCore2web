#include<stdio.h>

void main(void){

	int cnt = 1, i = 0, j = 0;
	while ( i<5){

		j = 0;
		while (j<=i){
			
			printf("%d  ", cnt);
			cnt++;
			j++;
		}

		cnt--;
		printf("\n");
		i++;
	}
}
