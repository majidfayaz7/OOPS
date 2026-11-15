#include<iostream>
#include<string>
#define PI 3.1415926536
using namespace std;

class Circle
{
    private:
        double radius;

    public:
        Circle(double radius)
        {
            this->radius = radius;
        }
        double area()
        {
            return PI*radius*radius;
        }
};

int main()
{
    double x,y;
    cout<<"Radius= ";
    cin>>x;
    cout<<" and ";
    cout<<"Radius= ";
    cin>>y;
    Circle a(x), b(y);
    cout<<"Area = " << a.area();
    cout<<" and ";
    cout<<"Area = " << b.area()<<endl;

    return 0;
}