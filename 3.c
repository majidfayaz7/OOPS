//3. Electricity Bill Calculator
#include <stdio.h>

int main()
{
    float units, bill = 0, surcharge = 0, total;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units <= 100)
    {
        bill = units * 1.5;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.5) + ((units - 100) * 2.5);
    }
    else
    {
        bill = (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4.0);
    }

    if (bill > 500)
    {
        surcharge = bill * 0.10;
    }

    total = bill + surcharge;

    printf("Bill = Rs. %.2f\n", bill);
    printf("Surcharge = Rs. %.2f\n", surcharge);
    printf("Total Bill = Rs. %.2f\n", total);

    return 0;
}