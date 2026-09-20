#include<iostream>
using namespace std;
int main()
{
    int n,remainder,a = 0;
    cout<<"enter yout number: ";
    cin>>n;
    int original = n;
    while (n!=0)
    {
        remainder = n%10;
        a += remainder;
        a *=10;
        n/=10;
    }
    a /= 10;
    
    a==original?cout<<"number is a palindrome" : cout<<"number is not a palindrome";
    return 0;
}