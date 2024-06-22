#include<iostream>
using namespace std;

class student
{
    public:
    int a=10;

    int sum()
    {
        int a = 10;
        int b = 20;
        int c = a + b;
        cout<<"The sum of a and b is "<<c;

        return 0;
    }

    student()
    {
        cout<<"\n\tconstructor is called";
    }

    ~student()
    {
        cout<<"\n\tdestructor is called";
    }

};


int main()
{
    student obj;
    obj.sum();
    return 0;
}