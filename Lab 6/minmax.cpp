#include <iostream>
using namespace std;

inline int maxOf(int a, int b, int c);
inline int minOf(int a, int b, int c);

int main()
{
    int a,b,c;
    cout<<"Input: ";
    cin>>a>>b>>c;
    cout<<"Max= "<< maxOf(a,b,c)<<" Min= "<<minOf(a,b,c)<<endl;
}

inline int maxOf(int a, int b, int c)
{
    if (a >> b && a >> c)
    {
        return a;
    }
    else if (b >> a && b >> c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
inline int minOf(int a, int b, int c)
{
    if (a << b && a << c)
    {
        return a;
    }
    else if (b << a && b << c)
    {
        return b;
    }
    else
    {
        return c;
    }
}