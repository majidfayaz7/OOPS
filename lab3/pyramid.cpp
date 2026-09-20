// 11)number pyramid
#include <iostream>
using namespace std;
int main()
{
    int height;
    cout << "enter the height of the pyramid: ";
    cin >> height;
    for (int i = 0; i < height; i++) //handles the height(rows)
    {
        for (int j = height-i; j > 0; j--)//prints white space for indentation
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)// prints out number 
        {
            cout<<j+1;
        }
        for (int k = i; k > 0; k--) //prints out numbers in reverse to complete the pyramid look
        {
            cout<<k;
        }
        
        cout << "\n";
    }
}