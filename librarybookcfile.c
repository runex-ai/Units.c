/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A LIBRARY BOOK TRACKER
DATE:11/1/2026
VERSION:1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char title[200];
	char again='y';
	
	while (again=='y' || again=='Y'){
		printf("Enter the book title  \n");
		fgets(title,  sizeof(title), stdin);
		
		FILE * fptr;
	fptr= fopen("borrowed_books,txt", "a");
	if(fptr ==NULL){
		printf("Error opening the file \n");
		exit(1);
	}
	fprintf(fptr ,"%s \n ",title);
	fclose(fptr);
	printf("file stored succcessfully");
	printf("Add another?(y/n):");
	scanf("%c",&again);
	

	
}

return 0;


}