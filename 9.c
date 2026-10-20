// 9. Menu-Driven Mathematical Operations
#include <stdio.h>

int main()
{
    int choice, n, i;
    int factorial;
    int prime;
    int original, remainder, reversed;
    int sum, digit;

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Factorial\n");
        printf("2. Prime Number Check\n");
        printf("3. Armstrong Number Check\n");
        printf("4. Palindrome Number Check\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);

                factorial = 1;

                for (i = 1; i <= n; i++)
                {
                    factorial = factorial * i;
                }

                printf("Factorial = %d\n", factorial);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);

                prime = 1;

                if (n <= 1)
                    prime = 0;

                for (i = 2; i <= n / 2; i++)
                {
                    if (n % i == 0)
                    {
                        prime = 0;
                        break;
                    }
                }

                if (prime)
                    printf("%d is Prime\n", n);
                else
                    printf("%d is Not Prime\n", n);

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);

                original = n;
                sum = 0;

                while (n > 0)
                {
                    digit = n % 10;
                    sum = sum + digit * digit * digit;
                    n = n / 10;
                }

                if (sum == original)
                    printf("%d is an Armstrong number\n", original);
                else
                    printf("%d is not an Armstrong number\n", original);

                break;

            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);

                original = n;
                reversed = 0;

                while (n > 0)
                {
                    remainder = n % 10;
                    reversed = reversed * 10 + remainder;
                    n = n / 10;
                }

                if (reversed == original)
                    printf("%d is a Palindrome\n", original);
                else
                    printf("%d is not a Palindrome\n", original);

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}