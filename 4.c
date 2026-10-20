//4)Triangle Validator and Type Checker
#include <stdio.h>
#include <math.h>
int check_triangle(int a[]);
int main()
{
    int a[3];
    printf("enter the three sides of triangle (press return key after each entry)\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", (a + i));
    }

    if (check_triangle(a) == 1)
    {   
        if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2) || pow(a[1], 2) + pow(a[2], 2) == pow(a[0], 2) || pow(a[2], 2) + pow(a[0], 2) == pow(a[1], 2))
        {
            printf("the triangle is a right angled triangle\n");
        }
        else if (a[0] == a[1] && a[0] == a[2])
        {
            // equilateral
            printf("the triangle is a equilateral triangle\n");
        }
        else if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
        {
            // isosceles
            printf("the triangle is an isosceles  triangle\n");
        }
        else
        {
            // scalene
            printf("the triangle is a scalene triangle\n");
        }
    }
    else
    {
        printf("not a valid triangle\n");
    }

    return 0;
}
int check_triangle(int a[])
{
    if (a[0] + a[1] > a[2] &&
        a[1] + a[2] > a[0] &&
        a[2] + a[0] > a[1])
    {
        return 1;
    }

    return 0;
}