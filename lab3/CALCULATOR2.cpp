#include<iostream>
using namespace std;

int main() 
{
    float a,b, result;
    char op;
cout<<"enter first operand:";
cin>>a;
cout<<"enter the operator:";
cin>>op;
cout<<"enter second operand:";
cin>>b;
if (op=='/'&& b==0)
{
    cout<<"division by zero is not possible";
}
else if (op=='%'){
    if((int)b==0)
    cout<<"modulus by zero is not possible";
    else
    cout<<"result is:"<<int(a)%int(b);
}
else{
    result= (op=='+')? a+b : (op=='-')? a-b : (op=='*')? a*b : (op=='/')? a/b : 0;
    if(op == '+' || op == '-' || op == '*' || op == '/')
    cout<<"result is:"<<result;
    else
    cout<<"invalid operator";
}
return 0;
}