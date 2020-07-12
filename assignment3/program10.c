#include<stdio.h>

void main(void){

	int numOne;
	int numTwo;
	int ans;

	printf("Enter 2 nums to add :: ");
	scanf("%d%d",&numOne, &numTwo);

	if (numOne > 0 && numTwo > 0){
		
		ans = numOne + numTwo;
		switch(ans % 2){

                case 0:printf("%d is even\n", ans);
                       break;
                case 1:printf("%d is odd\n", ans);
                       break;
        	}
	}else{
		printf("Negative number found ...");
	}

	
}
