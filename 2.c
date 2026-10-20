//2)Largest and Smallest of Four Numbers
#include <stdio.h>
void check_large(int a, int b, int c, int d);
void check_small(int a, int b, int c, int d);
int main()
{
    int a, b, c, d;
    printf("enter 4 numbers (press return key after each entry)\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    check_large(a, b, c, d);
    check_small(a, b, c, d);

    return 0;
}
void check_large(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
    {
        printf("%d is the largest entry\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is the largest entry\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is the largest entry\n", c);
    }
    else
    {
        printf("%d is the largest entry\n", d);
    }
}
void check_small(int a, int b, int c, int d)
{
    if (a < b && a < c && a < d)
    {
        printf("%d is the smallest entry\n", a);
    }
    else if (b < a && b < c && b < d)
    {
        printf("%d is the smallest entry\n", b);
    }
    else if (c < a && c < b && c < d)
    {
        printf("%d is the smallest entry\n", c);
    }
    else
    {
        printf("%d is the smallest entry\n", d);
    }
}