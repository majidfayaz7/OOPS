#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

long long lcm(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    long long result = (static_cast<long long>(a) / gcd(a, b)) * b;

    if (result < 0)
        result = -result;

    return result;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;

    cout << "Original input values are preserved in the functions "
         << "because arguments are passed by value." << endl;

    return 0;
}