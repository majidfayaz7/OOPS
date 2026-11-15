#include <iostream>
using namespace std;

void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Before: " << a << " " << b << endl;

    swapByRef(a, b);

    cout << "After: " << a << " " << b;
    return 0;
}
