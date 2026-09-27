/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:PROGRAM LIBRARY RECORD
DATE:9/27/2026
VERSION 1
*/

#include <stdio.h>

int main() {
    // declare variables
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // i. get inputs
    printf("Enter Book ID: \t");
    scanf("%d", &bookID);

    printf("Enter Due Date: \t");
    scanf("%d", &dueDate);

    printf("Enter Return Date: \t");
    scanf("%d", &returnDate);

    // ii. calculate days overdue
    daysOverdue = returnDate - dueDate;

    // iii. determine fine rate using if...else
    if (daysOverdue <= 7) {
        fineRate = 20;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    }
    else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    // iv. display results
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d per day\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}