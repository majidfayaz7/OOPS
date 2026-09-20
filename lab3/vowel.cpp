// 5) character classification
#include <iostream>
using namespace std;

int main()
{
char ch;

cout << "Enter a character: ";
cin >> ch;

switch (ch)
{

case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "Vowel";
    break;

case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    cout << "Vowel";
    break;


case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
    cout << "Digit";
    break;

default:
    // We need another check to distinguish
    // consonants from special characters.
    if ((ch >= 'a' && ch <= 'z') ||
        (ch >= 'A' && ch <= 'Z'))
    {
        cout << "Consonant";
    }
    else
    {
        cout << "Special character";
    }
}

return 0;
}