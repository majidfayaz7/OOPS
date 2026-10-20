#include <iostream>
using namespace std;

int power(int base, int exp)
{
    int result = 1;

    while (exp > 0)
    {
        result = result * base;
        exp--;
    }

    return result;
}

int main()
{
    int base, exp;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    if (exp < 0)
    {
        cout << "Enter a non-negative exponent." << endl;
        return 0;
    }

    cout << "Exponent before call = " << exp << endl;
    cout << "Power = " << power(base, exp) << endl;
    cout << "Exponent after call = " << exp << endl;

    return 0;
}