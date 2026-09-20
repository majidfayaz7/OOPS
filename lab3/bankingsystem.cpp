
#include<iostream>
using namespace std;
int main ()
{
    int choice;
    int deposit,withdraw;
    float balance=0;
    cout<<"welcome !\n";
   do
   {
    cout<<"\nSELECT SERVICE\n1)Deposit\n2)Withdraw\n3)Balance Inquiry\n4)exit\n";
    cin>>choice;
    switch (choice)
    {
    case 1 :
    {
        cout<<"enter amount :";
        cin>> deposit;
        balance += deposit;
        
        break;
    }
    case 2 :
    {
        cout<<"enter amount :";
        cin>>withdraw;
        if (withdraw > balance)
        {
            cout<<"insufficient balance !\n";
            break;
        }
        balance -= withdraw;
        cout<<"successfully witdrawn amount : "<<withdraw<<"\n";
        break;
    }
    case 3 :
    {   
        cout<<"available Balance : "<<balance<<endl;
        break;
    }
    case 4 :
    {
        break;
    }
   
    default:
        cout<<"invalid choice! \n";
        break;
    }
   } while (choice != 4);
   
    return 0;
}