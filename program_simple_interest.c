/*

AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SIMPLE PROGRAM COMPUTING SIMPLE INTREST
DATE:9/19/2026
VERSION:1

*/

#include <stdio.h>

int main() {
	
	//declare variable
	float principal ;
	float time ;
	float rate ;
	float simple_interest;
	
	//prompt the user
	
	printf("Enter the principal : \t");
	scanf("%f", &principal);
	
	printf("Enter the time : \t");
	scanf("%f", &time);
	
	printf("Enter the rate : \t");
	scanf("%f",&rate);
	
	//calculations
	
	simple_interest=(principal*time*rate)*0.01;
	
	printf("The simple interest is : %f \n",simple_interest);
	
	
	return 0;
	
}
