#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;
    int n;
    int a;
    cout<<"Enter number of rand";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number of rand "<<i+1<<endl;
        cin>>a;
        v1.push_back(a);
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<endl;
    }
    
    return 0;
}