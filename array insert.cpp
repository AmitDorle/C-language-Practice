#include<iostream>
using namespace std;


int main()
{
    int arr[10],n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    int posi,insert;
    cout<<endl<<"Enter the posi and number you want to insert:"<<endl;
    cin>>posi>>insert;

    for(int i=n+1;i>=posi-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[posi]=insert;

    cout<<"After insertion array is:"<<endl;
    for(int i=1;i<=n+1;i++)
    {
        cout<<arr[i]<<"abcd ";
    }
}