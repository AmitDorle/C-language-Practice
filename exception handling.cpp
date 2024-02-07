#include<iostream>
using namespace std;

int main()
{
    int x=0;
    int y=50;
    try
    {
        if(x==0)
        {
            throw x;
            cout<<"Exception";
        }
        else
        {
            float div=y/x;
            cout<<"The division is "<<div;
        }
    }
    catch(int x)
    {
        cout<<"The denominator must not be zero";
    }
    
    return 0;
}