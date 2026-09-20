// 4) advanced leap year checker
#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year.\n";
            }
            else
            {
                cout << year << " is not a leap year.\n";
            }
        }
        else
        {
            cout << year << " is a leap year.\n";
        }
    }
    else
    {
        cout << year << " is not a leap year.\n";
    }

 
    if (!(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
    {
        cout << "The next 5 leap years are:\n";

        int count = 0;
        int nextYear = year + 1;

        while (count < 5)
        {
            if (nextYear % 4 == 0)
            {
                if (nextYear % 100 == 0)
                {
                    if (nextYear % 400 == 0)
                    {
                        cout << nextYear << " ";
                        count++;
                    }
                }
                else
                {
                    cout << nextYear << " ";
                    count++;
                }
            }

            nextYear++;
        }
    }

    return 0;
}