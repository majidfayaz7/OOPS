#include <iostream>
using namespace std;

int main()
{
    int marks;

    do
    {
        cout << "Enter marks (0-100): ";
        cin >> marks;

        if (marks < 0 || marks > 100)
        {
            cout << "Invalid!" << endl;
        }

    } while (marks < 0 || marks > 100);

    cout << "Accepted: " << marks << endl;

    return 0;
}