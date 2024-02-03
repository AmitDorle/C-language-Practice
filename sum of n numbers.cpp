#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number upto which you want additon:\n";
    cin>>n;

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum = sum +i;
    }
    cout<<"The addition of numbers form 1 to "<<n<<" is :"<<sum;
    return 0;
}