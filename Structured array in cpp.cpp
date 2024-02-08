#include<iostream>
using namespace std;

struct Student
{
    int age;
    int rollno;
};

int main()
{
    struct Student stu[10];
    int n;
    cout<<"Enter the number of students\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter age of student "<<i<<endl;
        cin>>stu[i].age;
        cout<<"Enter rollno of student "<<i<<endl;
        cin>>stu[i].rollno;
    }

    cout<<"\n The structured array is:\n";
    cout<<"age\trollno\n";
    for(int i=1;i<=n;i++)
    {
        cout<<stu[i].age<<"\t"<<stu[i].rollno<<"\n";
    }

}