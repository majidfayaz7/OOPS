// 6) quadratic equation solver 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{   float a,b,c;
    double d,x1,x2;
    cout<<"ax^2 + bx + c\n Enter the coefficients (a,b,c):\n";
    cin>>a>>b>>c;
    if(a==0)
    {
        cout<<"leading coefficient can't be zero\n";
        return 0;
    }

    d = (b*b) - (4*a*c);
    x1 = (-b + sqrt(d))/(2*a);
    x2 = (-b - sqrt(d))/(2*a);
    
    if (d<0)
    {
        cout<<"imaginary roots";
    }else if (d==0)
    {
        cout<<"equal roots whose value is:\n"<<x1;
    }
    else
    {
        cout<<"distinct roots and they are:\n"<<x1<<" and "<<x2;

    }
    
    
    return 0;
}