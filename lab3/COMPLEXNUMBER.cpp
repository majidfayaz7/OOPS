#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r1,r2,c1,c2;
    float mag1,mag2;
    cout<<"enter the coefficient of real part of first complex number\n";
    cin>>r1;
    cout<<"enter the coefficient of imaginary part of first complex number\n";
    cin>>c1;
    mag1 = sqrt(pow(r1,2)+pow(c1,2));
    cout<<"enter the coefficient of real part of second complex number\n";
    cin>>r2;
    cout<<"enter the coefficient of imaginary part of second complex number\n";
    cin>>c2;
    mag2 = sqrt(pow(r2,2)+pow(c2,2));
    
    if (mag1 > mag2)
    {
        cout<<"magnitude of the first complex number is greater than the second\n";
    }
    else if(mag1 == mag2)
    {
        cout<<"magnitude of both the complex numbers is same";
    }
    else
    {
        cout<<"magnitude of the second complex number is greater than the first\n";
    }
    

}