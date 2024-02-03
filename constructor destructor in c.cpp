#include<iostream>

using namespace std;

class Student
{
    public:
    int a=10;
    int b=20;

    int sum()
    {
        int c=a+b;
        cout<<"The sum of a and b is: "<<c;
        return 0;
    }
    
    Student()
    {
        cout<<"Constructor is called\n";
    }

    ~Student()
    {
        cout<<"\ndestructor is called\n";
    }

};

int main()
{
    Student obj;
    obj.sum();
    return 0;
}