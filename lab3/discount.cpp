// 8)multi-level discount system
#include<iostream>
using namespace std;
int main()
{
    double price,discount,total;
    cout<<"enter the selling price of the product\n";
    cin>> price;
    price < 100.00 ? discount = 0 :
    price <= 500.00 ? discount = 0.10 * price :
    price <= 1000.00 ? discount = 0.15 * price :
    discount = 0.20 * price;
    total = price - discount;
    cout<< "your total payable amount after added discount is: "<<total;
    return 0;
}