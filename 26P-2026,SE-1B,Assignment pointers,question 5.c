#include <stdio.h>
void showBalance(float *balance);
void deposit(float *balance, float amount);
int withdraw(float *balance, float amount);

int main()
{
    float balance = 5000, amount;
    int choice;

    do
    {
        printf("\n----- BANK ACCOUNT -----\n");
        printf("1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            showBalance(&balance);

        else if (choice == 2)
        {
            printf("Amount: ");
            scanf("%f", &amount);

            if (amount <= 0)
                printf("Invalid amount.\n");
            else
                deposit(&balance, amount);
        }

        else if (choice == 3)
        {
            printf("Amount: ");
            scanf("%f", &amount);

            if (withdraw(&balance, amount))
                printf("Withdrawn.\n");
            else
                printf("Insufficient balance.\n");
        }

        else if (choice == 4)
            printf("Goodbye!\n");

        else
            printf("Invalid choice.\n");

    } while (choice != 4);

    return 0;
}

void showBalance(float *balance)
{
    printf("Balance: Rs %.2f\n", *balance);
}

void deposit(float *balance, float amount)
{
    *balance = *balance + amount;
}

int withdraw(float *balance, float amount)
{
    if (amount > 0 && *balance >= amount){
        *balance = *balance - amount;
        return 1;
    }
    return 0;
}
