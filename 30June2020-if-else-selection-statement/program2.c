#include<stdio.h>

void main(void){

	int coronaCases;
	printf("Enter no. of corona cases? :");
	scanf("%d", &coronaCases);

	if (coronaCases > 15000){
		
		printf("RedZone ...");
	}else if (coronaCases < 15000 && coronaCases >= 7000)
		printf("OrangeZone ...");
	else
		printf("GreenZone ...");
}
