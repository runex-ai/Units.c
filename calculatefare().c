/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A FARE CALCULATOR
DATE:10/10/2026
VERSION:1
*/

#include <stdio.h>
double calculatefare(int distance){
	double fare=0;
	
	fare=distance*50;
	

	
	return fare;
}

int main(){
	int distance;
	
	printf("Enter the distance covered in kilometers: \n");
	scanf("%d",&distance);
	
	printf("Total fare:Ksh. %.2f \n",calculatefare( distance));
	
	return 0;
}

