#include <stdio.h>

int main() {
    int accNo;
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("Final Balance = %.2f\n", balance);

    return 0;
}