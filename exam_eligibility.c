/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:EXAM ELIGIBILITY
DATE:9/26/2026
VERSION:1
*/

#include <stdio.h>

int main() {
	float attendance;
	int average_marks;
	
	printf("Enter your attendance :  % \t");
	scanf("%f",&attendance);
	
	printf("Enter your average marks : \t");
	scanf("%d", &average_marks);
	
	if (attendance>=75 && average_marks>=40) {
		printf("Student is eligible for the final exam \n");
	}
	else {
		printf("Not Eligible \n");
	}
	
	return 0 ;
}
