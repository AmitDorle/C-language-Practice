#include<iostream>
using namespace std;

int main()
{
    int arr[10],n;
    cout<<"Enter the number of students\n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is\n";
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int posi;
    cout<<"Enter the position where you want deletion\n";
    cin>>posi;
    for(int i=posi;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"The array after deletion is\n";
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}