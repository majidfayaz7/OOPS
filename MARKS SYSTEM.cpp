#include <iostream>
using namespace std;

int main()
{
    float marks[5], total = 0;
    float average, percentage;
    char grade;

    cout << "Enter marks of 5 subjects:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        total = total + marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << "%";
    cout << "Grade = " << grade;

    return 0;
}
