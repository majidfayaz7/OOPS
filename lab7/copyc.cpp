
#include <iostream>
using namespace std;

class Point
{
    private:
        int x, y;

    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        // Copy constructor
        Point(const Point &p)
        {
            x = p.x;
            y = p.y;
        }
        void display()
        {
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main()
{
    Point p1(3, 4);  

    Point p2(p1);    

    cout << "Original: ";
    p1.display();

    cout << "Copy: ";
    p2.display();

    return 0;
}