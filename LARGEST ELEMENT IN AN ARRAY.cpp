#include <iostream>
using namespace std;

int main()
{
    int a[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int largest = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > largest)
            largest = a[i];
    }

    cout << "Largest element = " << largest;

    return 0;
}
