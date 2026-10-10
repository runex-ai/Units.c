/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A TEMPERATURE CONVERSION CALCULATOR
DATE:10/10/2026
VERSION:1
*/

#include <stdio.h>
double converttoCelsius(int temperature){
	double celsius=0;
	
	
	celsius=(temperature-32)*5/9;
	

	
	return celsius;
}

int main(){
	int temperature;
	
	printf("Enter the temperature in fahrenheit: \n");
	scanf("%d",&temperature);
	
	printf("Temperature is: %.2f celsius \n",converttoCelsius(temperature));
	
	return 0;
}
