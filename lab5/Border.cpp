
#include <iostream>
#include <string>
using namespace std;

void printLine(char ch, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    string name;

    cout << "Enter your name: ";
    cin >> name;

    printLine('*', 12);
    cout << "  " << name << "  " << endl;
    printLine('*', 12);

    return 0;
}
