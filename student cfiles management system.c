/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:STUDENT RECORD MANAGEMENT SYSTEM
DATE:11/7/2026
VERSION:1
*/

#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main(){
	
	 saveStudent();
     displayStudents();
     addStudent();
	
	return 0;
	
}

void saveStudent(){
	FILE * fptr;
	char admission_number[20];
	char full_name[100];
	char course[50];
	fptr=fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\students.txt","w");
	
	
	if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
	}
	printf("Enter the student's full name: \n");
	fgets(full_name,sizeof(full_name),stdin);
	
	printf("Enter the student's admission number: \n");
	fgets(admission_number,sizeof(admission_number),stdin);
	
	printf("Enter the student's course: \n");
	fgets(course,sizeof(course),stdin);
	
	fputs(full_name, fptr);
	fputs(admission_number, fptr);
	fputs(course, fptr);
	
	
	printf("file successufully written to file \n");
	fclose(fptr);
}
void displayStudents(){
	FILE *fptr;
	int ch;
	fptr= fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\students.txt","r");
	
		if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
	}
	printf("\n ---Reading student records from file---\n");
	
	while((ch = getc(fptr)) != EOF){
		putchar(ch);
	}
	printf("File successfully read \n");
	fclose(fptr);
}
void addStudent(){
	FILE * fptr;
	char admission_number[20];
	char full_name[100];
	char course[50];
	fptr=fopen("C:\\Users\\ADMIN\\OneDrive\\Attachments\\files\\students.txt","a");
	
	
	if(fptr==NULL){
		printf("Error creating the file(path) \n");
		exit(1);
	}
	printf("Enter the student's full name to append: \n");
	fgets(full_name,sizeof(full_name),stdin);
	
	printf("Enter the student's admission number to append: \n");
	fgets(admission_number,sizeof(admission_number),stdin);
	
	printf("Enter the student's course to append: \n");
	fgets(course,sizeof(course),stdin);
	
	fputs(full_name, fptr);
	fputs(admission_number, fptr);
	fputs(course, fptr);
	
	
	printf("file successufully written to file \n");
	fclose(fptr);
	
}