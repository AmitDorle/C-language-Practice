#include<iostream>

using namespace std;

class School
{
    public:
    int a=20;
};

class Teacher:public School
{
    public:
    int b=20;
};

class Student:public Teacher
{
    public:
    int c=20;
};

int main()
{
    Teacher obj;
    cout<<obj.a<<"\n";

    Student obj1;
    cout<<obj.a;

    return 0;
}