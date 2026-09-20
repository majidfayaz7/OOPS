// 12) sum of digits
#include<iostream>
using namespace std;
int main()
{
    int n,remainder,sum =0, product=1;
    cout<<"enter your number: ";
    cin>>n;

    while (n!=0)
    {
        remainder = n%10;
        sum += remainder;
        product *= remainder;
        n/=10;
    }
    cout<<"the sum of the digits is "<<sum;
    cout<<"\nthe product of the digits is "<<product;
    return 0;
}