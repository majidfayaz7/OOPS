#include <iostream>
#include <string>
using namespace std;

void readMarks(int *marks, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> *(marks + i);
    }
}

double average(const int *marks, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += *(marks + i);

    return (double)sum / n;
}

char grade(double avg) {
    if (avg >= 85) return 'A';
    if (avg >= 70) return 'B';
    if (avg >= 55) return 'C';
    if (avg >= 40) return 'D';
    return 'F';
}

void topper(const int *marks, int n, int &index, int &score) {
    score = marks[0];
    index = 0;

    for (int i = 1; i < n; i++) {
        if (marks[i] > score) {
            score = marks[i];
            index = i;
        }
    }
}

void applyGrace(int *mark, int grace) {
    *mark += grace;

    if (*mark > 100)
        *mark = 100;
}

void report(const string &title, const int *marks, int n) {
    cout << "\n" << title << endl;

    for (int i = 0; i < n; i++)
        cout << "Student " << i + 1 << ": " << marks[i] << endl;
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) return 0;

    int marks[100];

    if (n > 100) return 0;

    readMarks(marks, n);

    double avg = average(marks, n);
    cout << "\nAverage = " << avg;
    cout << " (" << grade(avg) << ")";

    int index, score;
    topper(marks, n, index, score);

    cout << "\nTopper = Student " << index + 1;
    cout << " (" << score << ")";

    for (int i = 0; i < n; i++) {
        if (marks[i] < 50)
            applyGrace(&marks[i], 5);
    }

    cout << "\nAfter grace average = " << average(marks, n);

    report("Updated Marks", marks, n);

    return 0;
}