#include <stdio.h>

int main()
{
    int account_no;
    int balance = 0;
    int deposit, withdraw;
    int choice = 0;

    printf("Enter the Account Number: ");
    scanf("%d", &account_no);

    while (choice != 4)
    {
        printf(" BANK MENU \n");
        printf("1. Deposit Amount\n");
        printf("2. Withdraw Amount\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);

                if (deposit > 0)
                {
                    balance += deposit;
                    printf("Amount Deposited Successfully!\n");
                    printf("Account Number: %d\n", account_no);
                    printf("Current Balance: %d\n", balance);
                }
                else
                {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdraw);

                if (withdraw <= balance && withdraw > 0)
                {
                    balance -= withdraw;
                    printf("Withdrawal Successful!\n");
                    printf("Account Number: %d\n", account_no);
                    printf("Current Balance: %d\n", balance);
                }
                else
                {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 3:
                printf("Account Number: %d\n", account_no);
                printf("Current Balance: %d\n", balance);
                break;

            case 4:
                printf("Thank you for using our banking services!\n");
                break;

            default:
                printf("Invalid Choice! \n");
        }
    }

    return 0;
}