#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

string add(string a, string b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    double x, y;
    string s1, s2;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << add(a, b) << endl;

    cout << "Enter two doubles: ";
    cin >> x >> y;
    cout << add(x, y) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << add(a, b, c) << endl;

    cout << "Enter two strings: ";
    cin.ignore();
    getline(cin, s1);
    getline(cin, s2);
    cout << add(s1, s2) << endl;

    return 0;
}
