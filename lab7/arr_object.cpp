#include<iostream>
using namespace std;

int sq(int a);
int cb(int a);

int main ()
{
    for (int i = 1; i <= 5; i++)
    {
        cout<<i<<sq(i)<<cb(i)<<" | ";
    }
    cout<<endl;
    
}

inline int sq(int a)
{
    return a*a;
}
inline int cb(int a)
{
    return a*a*a;
}