//7. Month and Days (Switch-Case + Leap Year)
#include <stdio.h>
int main()
{
    int month, year;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
        printf("31 days");
        break;

    case 2:
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            printf("29 days");
        }
        else
        {
            printf("28 days");
        }
        break;

    case 3:
        printf("31 days");
        break;

    case 4:
        printf("30 days");
        break;

    case 5:
        printf("31 days");
        break;

    case 6:
        printf("30 days");
        break;

    case 7:
        printf("31 days");
        break;

    case 8:
        printf("31 days");
        break;

    case 9:
        printf("30 days");
        break;

    case 10:
        printf("31 days");
        break;

    case 11:
        printf("30 days");
        break;

    case 12:
        printf("31 days");
        break;

    default:
        printf("Invalid month");
    }

    return 0;
}