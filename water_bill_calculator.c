/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:WATER BILL CALCULATOR
DATE:9/26/2026
VERSION:1
*/

#include <stdio.h>

int main() {
	float water_units_consumed;
	float amount_to_pay;
	float total_water_bill;
	
	printf("Enter your water units consumed :  % \t");
	scanf("%f",& water_units_consumed);

	
	if (water_units_consumed<=30) {
		amount_to_pay=20;
		total_water_bill=water_units_consumed*amount_to_pay;
		printf("Total water bill= %f kes \n",total_water_bill);
	}
	else if (water_units_consumed>=31 &&water_units_consumed<=60){
		amount_to_pay=25;
		total_water_bill=water_units_consumed*amount_to_pay;
		printf("Total water bill=%f kes \n",total_water_bill);
		
	}
	else{
		amount_to_pay=30;
		total_water_bill=water_units_consumed*amount_to_pay;
		printf("Total water bill= %f- kes \n",total_water_bill);
	}
		
	
	
	return 0 ;
}
