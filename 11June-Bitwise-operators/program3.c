#include<stdio.h>

void main(void){
	
	int x = 10;
	int y = 2;
	int z = 1;
	int ans;

	// << operator						
	ans = x << y;					
	printf("X << y : %d\n",ans);
	/*
	 *	64	32	16	8	4	2	1
	 *				
	 *				1	0	1	0
	 *		1	0	1	0				// left shifted by 2
	 *
	 * 		Trick to do this directly
	 *
	 * 		x << y => 	10 << 2 
	 * 				10 multiply 2 raised to 2 => 40
	 *
	 */
	ans = x << y << z;			
	printf("X << y << z : %d\n",ans);	
	ans = x << y << 2;		
	printf("X << y << 2 : %d\n",ans);	
	

	x = 10;
        y = 15;
        z = 5;

        // << operator                                         
        ans = x << y;                                         
        printf("X << y : %d\n",ans);
        ans = x << y << z;                                      
        printf("X << y << z : %d\n",ans);
        ans = x << y << 2;                                      
	printf("X << y << 2 : %d\n",ans);	
}
