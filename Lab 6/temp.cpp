#include<iostream>
using namespace std;

inline double cToF(double c);
inline double fToC(double f);


int main()
{
    int choice;
    double t;
    do
    {
        cout<<"please select your choice"<<endl<<"1.Celcius to Farenheit "<<"2.Farenheit to Celcius "<<"3. Quit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter temperature in Celcius"<<endl;
            cin>>t;
            cout<<t<<" in Farenheit is equal to "<<cToF(t);
            break;
        
        case 2:
             cout<<"Enter temperature in Farenheit"<<endl;
            cin>>t;
            cout<<t<<" in Celcius is equal to "<<fToC(t);
            break;
        
        case 3:
            cout<<"Goodbye!"<<endl;
            break;
        
        default:
        cout<<"Invalid choice";
            break;
        }

    } while (choice != 3);
    
}

inline double cToF(double c)
{
    return c*9/5+32;
}

inline double fToC(double f)
{
    return (f-32)*5/9;
}