#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1{1,2,3,4};
    vector<int> v2{5,6,7,8};
    cout<<"Before Swapping\n";
    cout<<"\nVector1 elements are\n";
    for(auto it=v1.begin();it<v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nVector2 elements are\n";
    for(auto it=v2.begin();it<v2.end();it++)
    {
        cout<<*it<<" ";
    }

    v1.swap(v2);
    cout<<"\nAfter Swapping\n";
    cout<<"\nVector1 elements are\n";
    for(auto it=v1.begin();it<v1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\nVector2 elements are\n";
    for(auto it=v2.begin();it<v2.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}