/*

AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:weekly task 2 assignment
DATE:9/18/2026
VERSION:1

*/

#include <stdio.h>

int main() {
	//declare variable
	float height  ; //%f
	double bank_balance ; //%lf
	char phone_number[15]  ;//%s
	
	//prompt the user
	printf("Enter your height : \t");
	scanf("%f" , &height);
	
	printf("Enter your bank_balance : \t");
	scanf("%lf", &bank_balance);
	
	printf("Enter your phone_number : \t");
	scanf("%s" ,&phone_number);
	
	printf("My height is %f meters \n", height);
	printf("My Bank_Balance is %lf kenya shillings \n", bank_balance);
	printf("My phone_number is %s \n",phone_number);
	
	return 0;
	
}
