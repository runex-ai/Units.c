/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SIMPLE STUDENT MARKS
DATE:10/4/2026
VERSION:1
*/

#include <stdio.h>

int main(){
	int marks;
	char grade;
	char again;
	
	do{
	   printf("Enter student's marks(0-100):");
	   scanf("%d",&marks);
	   
	   while(marks<0 || marks>100){
	   	printf("Invalid marks!Mark must be between 0 and 100. \n");
	   	printf("Enter student's marks(0-100):");
	    scanf("%d",&marks);
	   }
	   if(marks>=80){
	   	grade='A';
	   }
	   else if(marks>=70){
	   	grade='B';
	   }
	   else if(marks>=60){
	   	grade='C';
	   }
	   else if(marks>=50){
	   	grade='D';
	   }
	   else{
	   	grade='F';
	   }
	   
	   printf("Marks:%d ,Grade:%c \n",marks,grade);
	   
	   printf("Enter another student's marks? (y/n):'");
	   scanf(" %c",&again);
	   
	}
	while(again=='y' || again =='Y');
	
	return 0;
}