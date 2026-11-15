#include<iostream>
#include<string>
using namespace std;

class Student 
{
    private:
        string name;
        int rollno;
        int marks1;
        int marks2;
        int marks3;
    public:
        void input();
        int total();
        int average();
        void display();

};

void Student::input()
{
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Rollno"<<endl;
    cin>>rollno;
    cout<<"Enter marks in subject1"<<endl;
    cin>>marks1;
    cout<<"Enter marks in subject2"<<endl;
    cin>>marks2;
    cout<<"Enter marks in subject3"<<endl;
    cin>>marks3;
}

int Student::total()
{
    return marks1+marks2+marks3;
}
int Student::average()
{
    return (marks1+marks2+marks3)/3;
}
void Student:: display()
{
    cout<<"Name : "<<name<<endl;
    cout<<"rollno : "<<rollno<<endl;
    cout<<"Total :"<<total()<<endl;
    cout<<"Average :"<<average()<<endl;
}

int main()
{
    Student bar;
    bar.input();
    bar.display();
}