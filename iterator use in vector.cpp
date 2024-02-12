#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int a,input;
    cout<<"Enter vector elements\n";
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>input;
        v.push_back(input);
    }

    cout<<"Vector elements are\n";
    for(auto it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}