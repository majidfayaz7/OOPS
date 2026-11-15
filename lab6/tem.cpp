#include<iostream>
using namespace std;
class Temp
{
private:
    double celcius;     
public:
  void input()
  {
    cout<<"Celcius = ";
    cin>>celcius;
  }

  double toFahrenheit()
  {
    return (celcius*9/5)+32;
  }

  void display()
  {
    cout<<celcius<<" Celcius = "<<toFahrenheit()<<" Fahrenheit"<<endl;
  }
};

int main()
{
    Temp k;
    k.input();
    k.display();
}