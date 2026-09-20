#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    int daysInMonth;
    int dayOfWeek;

    cout << "Enter date (DD-MM-YYYY): ";
    cin >> day;
    cin.ignore(1, '-');
    cin >> month;
    cin.ignore(1, '-');
    cin >> year;

    if (year < 1) {
        cout << "Invalid date: Year must be positive." << endl;
        return 0;
    }

    if (month < 1 || month > 12) {
        cout << "Invalid date: Month must be between 1 and 12." << endl;
        return 0;
    }

    if (month == 2) {
        if ((year % 400 == 0) ||
            (year % 4 == 0 && year % 100 != 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11) {
        daysInMonth = 30;
    }
    else {
        daysInMonth = 31;
    }

    if (day < 1 || day > daysInMonth) {
        cout << "Invalid date: Day is out of range." << endl;
        return 0;
    }

    int m = month;
    int y = year;

    if (m < 3) {
        m += 12;
        y--;
    }

    dayOfWeek = (day + (13 * (m + 1)) / 5 +
                 y + y / 4 - y / 100 + y / 400) % 7;

    cout << "Valid date: " << day << "-" << month << "-" << year << endl;

    // Switch-case for day of the week
    switch (dayOfWeek) {
        case 0:
            cout << "Day: Saturday" << endl;
            break;
        case 1:
            cout << "Day: Sunday" << endl;
            break;
        case 2:
            cout << "Day: Monday" << endl;
            break;
        case 3:
            cout << "Day: Tuesday" << endl;
            break;
        case 4:
            cout << "Day: Wednesday" << endl;
            break;
        case 5:
            cout << "Day: Thursday" << endl;
            break;
        case 6:
            cout << "Day: Friday" << endl;
            break;
    }

    return 0;
}
