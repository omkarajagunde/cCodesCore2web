#include<stdio.h>

// int, float, char
void main(void){

	int i;
	float f;
	char c;

	printf("Enter int -float -char :");
	// here %c eats '\n' after float value is entered ...
	// hence char c contains blank
	//scanf("%d%f%c", &i, &f, &c);
	
	// So to avoid this we can give space after '%f' so that
	// %c will eat up ' ' space and not get entered ...
	scanf("%d%f %c", &i, &f, &c);

	printf("int -:%d\n",i);
	printf("float -:%f\n",f);
	printf("char -:%c\n",c);
}
