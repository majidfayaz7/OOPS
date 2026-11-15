#include <iostream>
using namespace std;

void sort3(int &a, int &b, int &c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    sort3(a, b, c);

    cout << a << " " << b << " " << c;
    return 0;
}