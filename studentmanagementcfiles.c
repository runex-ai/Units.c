/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A STUDENT MANAGEMENT SYSTEM
DATE:11/1/2026
VERSION:1
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main(void) {
    struct Student s;
    FILE *fptr = fopen("results.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening results.dat\n");
        exit (1);
    }

    printf("%-20s %s\n", "Name", "Marks");
    while (fread(&s, sizeof(struct Student), 1, fptr) == 1) {
        printf("%-20s %.2f\n", s.name, s.marks);
    }

    fclose(fptr);
    return 0;
}