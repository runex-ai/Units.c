/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SIMPLE ATM WITHRAWAL PROGRAM
DATE:10/3/2026
VERSION:1
*/

#include <stdio.h>

int main(){
	double balance=50000;
	double amount;
	
	printf(" intial balance :Ksh %.2f \n",balance);
	
	printf("Enter withrawal amount(0 to stop): \t");
	scanf("%lf",&amount);
	
	while(amount!=0 &&amount <=balance){
		balance =balance-amount;
		printf("Withrawal successful.Remaining balance:Ksh%.2f \n",balance);
		
		printf("Enter withrawal amount(0 to stop): \t");
	    scanf("%lf",&amount);
	}
	
	if (amount>balance){
		printf("Insufficient funds.Transaction ended. \n");
	}else{
		printf("Thank you.Final balance : Ksh%.2f \n",balance);
	}
	
	return 0;
	}