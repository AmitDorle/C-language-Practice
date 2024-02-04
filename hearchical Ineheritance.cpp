#include<iostream>
using namespace std;

class School
{
    public:
    int a=10;
};
class Teacher:public School
{
    public:
    int b=10;
};
class Student:public School
{
    public:
    int c=10;
};

int main()
{
    Teacher obj1;
    cout<<obj1.a<<"\n";
    Student obj;
    cout<<obj.a<<"\n";
    return 0;
}