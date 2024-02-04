#include<iostream>

using namespace std;

class School
{
    public:
    int a=10;
};

class Student:public School
{
    public:
    int b=20;

};

int main()
{
    Student obj;
    cout<<obj.a;

    return 0;
}