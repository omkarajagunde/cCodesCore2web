#include<stdio.h>

void main(void){

	int num=120;
	/*
	 * 120 % 2 == 0 is True
	 */
	if(num%2 ==0){
		printf("%d is divisible by 2\n",num);			// This will print
		/*
		 * 120 % 3 == 0 is True
		 */
		if(num%3 == 0){
			printf("%d is divisible by 3\n",num);		// This will print
			
			/*
			 * 120 % 5 == 0 is True
			 */
			if(num%5==0){	
				printf("%d is divisible by 5\n",num);	// This will print
			}else {
				printf("%d is not divisible by 5\n",num);
			}
	
		}else{
			printf("%d is not divisible by 3\n",num);
		}
	
	}else{
		printf("%d is not divisible by 2\n",num);
	}
}
