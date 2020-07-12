#include<stdio.h>

void main(void){

	int ilc=15, olc= 25;

	if(olc > ilc){				// 25 > 15 => True hence execute block

		printf("olc : %d\n",olc);	// 25

	}


	if(ilc<olc);{				// 15 < 25 => True but ; just after ) 
						// closing bracket terminates if and now
						// {... } block executes indepently

		printf("ilc : %d\n",ilc);	// 15

	}

	// These 2 satatements are outside so they will always execute
	printf("olc : %d\n",olc);		// 25
	printf("ilc : %d\n",ilc);		// 15
}
