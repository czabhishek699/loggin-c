//ABHISHEK-STRCMP
#include<stdio.h>
#include<string.h>
	int main(){
		char email[20];
		char password[20];
		printf("Enter your email:");
		scanf("%20s",&email);
		printf("Enter your password:");
		scanf("%20s",&password);
		if(strcmp(email,"test@mail.com")==0 && strcmp(password,"pass123")==0){
			printf("Logined true");
		}
		else{
			printf("Loggin failed");
		}
		return 0;
	}
