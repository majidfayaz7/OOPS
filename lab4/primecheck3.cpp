#include <iostream>
using namespace std;

int main()
{
    int n;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
    {
        prime = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
    }

    if (prime)
        cout << n << " is prime" << endl;
    else
        cout << n << " is not prime" << endl;

    return 0;
}