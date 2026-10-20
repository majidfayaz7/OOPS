//1)Sign and Parity Check
#include <stdio.h>
int main()
{
    int a;
    printf("enter your number\n");
    scanf("%d", &a);
    if (a > 0 && a % 2 == 0)
    {
        printf("%d is positive even\n", a);
    }
    else if (a < 0 && a % 2 == 0)
    {
        printf("%d is negative even\n", a);
    }
    else if (a > 0 && a % 2 != 0)
    {
        printf("%d is positive odd\n", a);
    }
    else if (a < 0 && a % 2 != 0)
    {
        printf("%d is negative odd\n", a);
    }
    else
    {
        printf("you've entered zero\n");
    }

    return 0;
}