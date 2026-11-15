#include<iostream>
using namespace std;

class Rectangle
{
private:
    /* data */
    double length;
    double breadth;

public:
 /* member functions */
   void input()
   {
    cout<<"Length = ";
    cin>>length;
    cout<<"breadth = ";
    cin>>breadth;
   }
   double area()
   {
    return length*breadth;
   }
   double perimeter()
   {
    return 2*(length+breadth);
   }
};

int main()
{
    Rectangle foo;
    foo.input();
    cout<<"Area = "<<foo.area()<<endl;
    cout<<"Perimeter = "<<foo.perimeter()<<endl;
    return 0;

}
