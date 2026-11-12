#include<iostream>
#include<cmath>
#define PI 3.1415926536
using namespace std;



double area(double r)//circe
{
    return PI*r*r;
}
double area(double l, double b)//rectangle
{
    return l*b;
}
double area(double a,double b,double c)//triangle
{
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main ()
{
    int n;
    cout<<"which shape ?"<<endl<<"1.circle"<<endl<<"2.rectangle"<<endl<<"3.triangle"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        double r;
        cout<<"enter radius: ";
        cin>>r;
        cout<<"the area of circle is "<<area(r)<<endl;
        break;
    
    case 2:
        {double l,b;
        cout<<"enter length and breadth: ";
        cin>>l>>b;
        cout<<"the area of the rectangle is "<<area(l,b)<<endl;
        break;}
    
    case 3:
        {double a,b,c;
        cout<<"enter the three sides: ";
        cin>>a>>b>>c;
        cout<<"the area of the triangle "<<area(a,b,c)<<endl;
        break;}
    
    default:
    cout<<"invalid choice"<<endl;
        break;
    }
    return 0;
}