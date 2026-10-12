#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n1. Add";
        cout << "\n2. Subtract";
        cout << "\n3. Multiply";
        cout << "\n4. Divide";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if (b == 0)
                    cout << "Cannot divide by zero!" << endl;
                else
                    cout << "Result = " << a / b << endl;

                break;

            case 5:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}