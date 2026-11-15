#include <iostream>
using namespace std;

void change(int x) {
    x = x * 2;
    cout << "Inside function = " << x << endl;
}

int main() {
    int n = 10;

    change(n);
    change(n);

    cout << "Original = " << n;
    return 0;
}
