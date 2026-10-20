#include <iostream>
using namespace std;

void change(int x)
{
    x = x * 2;
    cout << "Inside function: " << x << endl;
}

int main()
{
    int num = 10;

    change(num);
    change(num);

    cout << "Original variable: " << num << endl;

    return 0;
}