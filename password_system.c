/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A  SIMPLE PASSWORD SYSTEM
DATE:10/5/2026
VERSION:1
*/

#include <stdio.h>
#include <string.h>

int main(void){
	
	char password[50];
	
	
	do{
		printf("Enter your password:");
		scanf("%49s", password);
		
		
		if(strcmp(password,"1234")!=0)
		printf("Incorrect password.Try Again.\n");
		
		
	}while(strcmp(password,"1234")!=0);
	
	printf("Access Granted.\n");
	
	return 0;
}