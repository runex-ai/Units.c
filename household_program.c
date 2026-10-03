/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SIMPLE HOUSEHOLD MANAGEMENT SYSTEM
DATE:10/1/2026
VERSION:1
*/

#include <stdio.h>

int main(){
	
	int households;
	int units;
	int i;
	
	households=10;
	
	for(i=1;i<=households;i++){

	printf("Enter the units consumed by household %d:",i);
	scanf("%d",&units);
	printf("Households %d consumed %d units \n",i,units);
		
		
	}
	
	
	
	return 0;
	
}