#include <iostream>
using namespace std;

void swapByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before: x = " << x << ", y = " << y << endl;

    swapByRef(x, y);

    cout << "After: x = " << x << ", y = " << y << endl;

    return 0;
}