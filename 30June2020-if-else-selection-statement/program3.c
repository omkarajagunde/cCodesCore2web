#include<stdio.h>
#include<string.h>
void main(void){

	
	char username[30];
	char password[30];

	char savedUsername[] = "OmkarAjagunde";
	char savedPassword[] = "xyz@core2web";

	printf("Enter username :");
	scanf("%s",username);
	printf("Enter password :");
	scanf("%s",password);



	if (!strcmp(username, savedUsername)){
		
		if (!strcmp(password, savedPassword)){
				
			printf("Login Successfull ...");
		}else
			printf("Invalid Password ...");

	}else
		printf("Invalid Username ...");	
}
