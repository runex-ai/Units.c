/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SIMPLE BANK LOAN PROGRAM
DATE:9/23/2026
VERSION:1
*/

#include <stdio.h>

int main() {
	int age;
	double income;
	
	printf("Enter your age : \t");
	scanf("%d",&age);
	
	printf("Enter your income : \t");
	scanf("%lf", &income);
	
	if (age>=21 && income>=21000) {
		printf("Congraduations you qualifty for a loan \n");
	}
	else {
		printf("Unfourtunately, we are unable to offer you loan at this time \n");
	}
	
	return 0 ;
}
