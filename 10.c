//10. Mini ATM Simulation
#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0;
    float amount;

    do
    {
        printf("\n----- ATM MENU -----\n");
        printf("1. Balance Inquiry\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Cash Deposit\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    balance = balance - amount;
                    printf("Withdrawal successful\n");
                    printf("Remaining Balance = Rs. %.2f\n", balance);
                }

                break;

            case 3:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount\n");
                }
                else
                {
                    balance = balance + amount;
                    printf("Deposit successful\n");
                    printf("New Balance = Rs. %.2f\n", balance);
                }

                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 4);

    return 0;
}