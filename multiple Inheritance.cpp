#include<iostream>
using namespace std;

class School
{
    public:
    int a=10;
};
class Teacher
{
    public:
    int b=10;
};
class Student:public School,public Teacher
{
    public:
    int c=10;
};

int main()
{
    Student obj;
    cout<<obj.a<<"\n";
    cout<<obj.b;
    return 0;
}