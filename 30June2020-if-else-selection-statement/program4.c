#include<stdio.h>

void main(void){

	int coronaCases = 0;

	if (coronaCases == 0){
		
		printf("Schools, colleges Wil Open ...\n");
	}else if (coronaCases > 500){

		printf("Schools, colleges will remained close ...\n");
	}else if (coronaCases > 5000){
		
		printf("LockDown\n");
	}
}
