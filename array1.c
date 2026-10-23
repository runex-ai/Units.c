/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A WEEKLY REVENUE TRACKER
DATE:10/23/2026
VERSION:1
*/

#include <stdio.h>

int main(){
	float revenue[7];
	float total=0,average;
	int i;
	
	for(i=0;i<7;i++){
		
		printf("Enter the revenue for  day %d:" ,i+1);
		scanf("%f",& revenue[i]);
		
	}
	
	for(i=0;i<7;i++){
		total=total+revenue[i];
	}
	
	average=total/7;
	
	printf("Total weekly revenue=ksh%.2f \n",total);
	printf("Average weekly revenue=ksh%.2f \n",average);
	
	
	return 0;
}
