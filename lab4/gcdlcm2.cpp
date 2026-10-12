#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int originalA, originalB;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    originalA = a;
    originalB = b;

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    int gcd = a;
    int lcm = (originalA * originalB) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}