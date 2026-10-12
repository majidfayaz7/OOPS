#include <iostream>
using namespace std;

int main()
{
    int n;
    int key;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Not found" << endl;
    }

    return 0;
}