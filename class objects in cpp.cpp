#include<iostream>
using namespace std;

class Student
{
    public:
    int a=10;
    int b=20;
    void virtual print()
    {
        cout<<"print base\n";
    }
};

class Subject:public  Student
{
    public:
    int c=220;

    void print()
    {
        cout<<"print deriveed\n";
    }
};

int main()
{
    Student *ptr;
    Subject obj1;
    Student obj;
    ptr = &obj1;
    obj1.print();
    ptr->print();
    return 0;
}