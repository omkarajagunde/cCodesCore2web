#include<stdio.h>

void main(void){

	int classRoomNumber;
	int studentRollNumber;

	printf("Enter classNumber :: ");
	scanf("%d", &classRoomNumber);
	printf("Enter Student RollNumber :: ");
	scanf("%d", &studentRollNumber);

	switch(classRoomNumber){

		case 1:
			switch(studentRollNumber){
				
				case 1:printf("Rahul present\n");
				       break;
				case 2:printf("Omkar present\n");
                                       break;
				case 3:printf("Ashish present\n");
                                       break;
				case 4:printf("Rohan present\n");
                                       break;
				default:printf("Roll number not found\n");
			}
			break;
		default:
			printf("No class room numbered #%d found\n",classRoomNumber);
	}
}
