/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A SALES SYSTEM
DATE:11/2/2026
VERSION:1
*/
#include <stdio.h>

int main() {
    FILE *fptr = fopen("sales.txt", "r");
    double amount, total = 0.0;

    if (fptr == NULL) {
        printf("Error opening sales.txt\n");
        return 1;
    }

    while (fscanf(fptr, "%lf", &amount) == 1) {
        total =total + amount;
    }

    fclose(fptr);  

    printf("Total sales for the day: %.2f\n", total);
    return 0;
}