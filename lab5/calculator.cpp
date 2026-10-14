
#include <iostream>
using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main()
{
    double a, b;
    int operation ;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n Calculator Menu\n";
    cout << "1. Add"<< endl;
    cout << "2. Subtract"<< endl;
    cout << "3. Multiply"<< endl;
    cout << "4. Divide"<< endl;
    cout << "Enter your operation: ";
    cin >> operation;

    switch (operation)
    {
        case 1:
            cout << "Result = " << add(a, b);
            break;

        case 2:
            cout << "Result = " << subtract(a, b);
            break;

        case 3:
            cout << "Result = " << multiply(a, b);
            break;

        case 4:
            if (b == 0)
                cout << "Division by zero is not allowed.";
            else
                cout << "Result = " << divide(a, b);
            break;

        default:
            cout << "Invalid operation!";
    }

    cout << endl;
    return 0;
}

double add(double a, double b)
{
    return a + b;
}
double subtract(double a, double b)
{
    return a - b;
}
double multiply(double a, double b)
{
    return a * b;
}
double divide(double a, double b)
{
    return a / b;
}