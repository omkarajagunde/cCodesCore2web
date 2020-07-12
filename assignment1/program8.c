#include<stdio.h>

void main(void){


	int year=2020;
	
	/*
	 * Here 2020 % 4 == 0 is True
	 * 	2020 % 100 != 0 is False
	 * 	2020 % 400 == 0 is True
	 *
	 * 	(True && False) || True
	 * =	False || True
	 * = 	True
	 *
	 * Hence if block will be excuted ...
	 */	
	if(year%4==0 && year%100 != 0 || year %400 ==0 ){
		printf("%d year is leap year\n", year);
	}
}
