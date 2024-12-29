#include<iostream>
using namespace std;

void get(int a[],int n)
{
    cout<<"Enter array Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter at "<<i+1<<" : ";
        cin>>a[i];
    }
}
void dis(int a[],int n)
{
    cout<<"\nArray Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\nElement at "<<i+1<<" : ";
        cout<<a[i];
    }
}

int main()
{
    int a[10],n;
    cout<<"Enter size of array : ";
    cin>>n;
    get(a,n);
    dis(a,n);
}