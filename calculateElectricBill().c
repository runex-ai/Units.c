/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:AN ELECTRIC BILL CALCULATOR
DATE:10/10/2026
VERSION:1
*/

#include <stdio.h>

double calculateElectricbill(int units){
	double bill=0;
	
	if(units<=100){
		bill=100*10;
	}else if(units<=200){
		bill=100*10+(units-100)*15;
	}
	else{
		bill=100*10+100*15+(units-200)*20;
	}
	
	return bill;
}

int main(){
	int units;
	
	printf("Enter the units consumed: \n");
	scanf("%d",&units);
	
	printf("Total bill:Ksh. %.2f \n",calculateElectricbill(units));
	
	return 0;
}




