#include<stdio.h>

void main(void){

	int decNum, counter, shiftVal, cnt = 0;

	printf("\nEnter value in decimal number format? \n");
	scanf("%d",&decNum);

	printf("Binary number system for %d : ", decNum);

	for (counter = 31; counter >= 0; counter --){
		
		shiftVal = decNum >> counter;
		if (shiftVal & 1){
			if(cnt == 4){
				printf("");
				cnt = 0;
			}
			printf("1");
		}else{
			if (cnt == 4){
				printf("");
				cnt = 0;
			}
			printf("0");
		}
		cnt ++;
	}
	printf("\n");
}
