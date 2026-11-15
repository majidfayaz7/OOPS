#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &s) {
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);

    cout << countVowels(s);
    return 0;
}
