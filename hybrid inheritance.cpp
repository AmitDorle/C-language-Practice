#include<iostream>
using namespace std;

class School
{
    public:
    int a=10;
};
class Teacher:virtual public School
{
    public:
    int b=50;
};
class Student:virtual public School
{
    public:
    int c=20;
};

class HW:public Teacher,public Student
{
    public:
    int d=30;
};

int main()
{
    Teacher obj1;
    cout<<obj1.a<<"\n";
    Student obj;
    cout<<obj.a<<"\n";
    HW hw1;
    cout<<hw1.a;
    return 0;
}