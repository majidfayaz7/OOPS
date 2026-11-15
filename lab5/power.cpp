#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;

    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

int main() {
    int base, exp;
    cin >> base >> exp;

    cout << "Before = " << exp << endl;
    cout << "Power = " << power(base, exp) << endl;
    cout << "After = " << exp;

    return 0;
}