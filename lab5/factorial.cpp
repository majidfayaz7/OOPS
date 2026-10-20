#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    return result;
}

long long nCr(int n, int r)
{
    if (n < 0 || r < 0 || r > n || n > 20)
        return -1;

    return factorial(n) /
           (factorial(r) * factorial(n - r));
}

int main()
{
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    long long result = nCr(n, r);

    if (result == -1)
        cout << "Invalid input or value too large." << endl;
    else
        cout << "nCr = " << result << endl;

    return 0;
}