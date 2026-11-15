#include<iostream>
#include<string>
using namespace std;
class Bank
{
    private:
        string holder_name;
        double balance;
    public:
        void setAccount(string name)
        {   holder_name = name;
            balance = 0;
        }

        void deposit(double x)
        {
            if(x>0)
            {
                balance+=x;
                cout<<"deposited "<<x<<endl<<"current Balance : "<<balance<<endl;
            }
            else
            cout<<"deposit must be > 0"<<endl;
        }
        void withdraw(double x)
        {
            if(x<balance)
            {
                balance-= x;
                cout<<"Withdrawal of "<<x<<"successfull"<<endl<<"Remaining Balance : "<<balance<<endl;   
            }
            else
            cout<<"insufficient Balance"<<endl;
        }
        void showBalance()
        {
            cout<<balance<<endl;
        }
};

int main()
{
    Bank foo;
    foo.setAccount("chingchong");
    foo.showBalance();
    foo.deposit(50);
    foo.withdraw(500);
}