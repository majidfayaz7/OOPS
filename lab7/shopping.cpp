#include<iostream>
#include<string>
using namespace std;

class product
{
    private:
        string name;
        double price;
        int quantity;
    public:
    void input()
    {
        cout<<"Item : ";
        cin>>name;
        cout<<"Price: ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>quantity;
    }
    
    double total_bill()
    {
        return price*quantity;
    }
    void display()
    {
        cout<<name<<": "<<price<<" x "<<quantity<<", Total bill "<<total_bill()<<endl;
    }
};

int main()
{
    product taco;
    taco.input();
    taco.display();
}