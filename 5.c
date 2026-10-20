//6) Number to Words Converter
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter a number between 0-99: ");
    scanf("%d", &n);

    if (n > 99 || n < 0)
    {
        printf("invalid entry\n");
    }
    else if (n < 10)
    {
        switch (n)
        {
        case 1:
            printf("one\n");
            break;

        case 2:
            printf("two\n");
            break;

        case 3:
            printf("three\n");
            break;

        case 4:
            printf("four\n");
            break;

        case 5:
            printf("five\n");
            break;

        case 6:
            printf("six\n");
            break;

        case 7:
            printf("seven\n");
            break;

        case 8:
            printf("eight\n");
            break;

        case 9:
            printf("nine\n");
            break;
        }
    }
    else if (n >= 10 && n <= 19)
    {
        switch (n)
        {
        case 10:
            printf("Ten");
            break;
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;
        }
    }
    else
    {
        int tens = n / 10;
        int ones = n % 10;
        switch (tens)
        {
        case 2:
            printf("Twenty");
            break;
        case 3:
            printf("Thirty");
            break;
        case 4:
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
        }
        if (ones != 0)
        {
            printf(" ");
            switch (ones)
            {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            }
        }
    }
    return 0;
}