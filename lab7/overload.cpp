#include<iostream>
#include<string>
using namespace std;

class box
{
    private:
        double length,breadth,height;
    
    public:
        box()
        {
            length=1;
            breadth=1;
            height=1;
        }
        box(double l,double b, double h)
        {
            length=l;
            breadth=b;
            height=h;
        }
        double volume ()
        {
            return length*breadth*height;
        }
};

int main()
{
    double l,b,h;
    cout<<"Enter length,breadth and height ";
    cin>>l>>b>>h;
    box one, two(l,b,h);
    cout<<"volume= "<<one.volume()<<" and volume= "<<two.volume()<<endl;
}