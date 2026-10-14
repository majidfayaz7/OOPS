#include <iostream>
using namespace std;

int main()
{
    int n;
    int digits = 0;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;

        sum = sum + digit;
        digits++;

        n = n / 10;
    }

    cout << "Digits = " << digits << endl;
    cout << "Sum = " << sum << endl;

    return 0;
}