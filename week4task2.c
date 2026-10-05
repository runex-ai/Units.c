/*
AUTHOR:STEPHEN MWANGI
REG NUMBER:BCS-05-0076/2026
DESCRIPTION:A  ATM WITHRAWAL PROGRAM
DATE:10/5/2026
VERSION:1
*/

#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        balance = balance - withdrawal;

        printf("Remaining balance: %.2f\n", balance);
    }

    printf("Account balance is zero or negative.Please top up the balance.\n");

    return 0;
}
