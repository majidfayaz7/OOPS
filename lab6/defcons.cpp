#include<iostream>
#include<string>
using namespace std;
class book
{

    private:
        string tittle;
        double price;
        
    public:
    book()
    {
        tittle = "unknown";
        price = 0;
    }
    
    void display()
    {
        cout<<"Tittle: "<<tittle<<" , price: "<<price<<endl;
    }
    
};

int main()
{
    book foo;
    foo.display();
}