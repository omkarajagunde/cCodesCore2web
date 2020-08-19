int printf(const char*, ...);

void main(void){

	int cnt = 1;
	for (int i = 0, i<4; i++){
		for (int j = 0; j<4; j++){

			printf("%d\t",cnt++);
		}
		printf("\n");
	}
}
