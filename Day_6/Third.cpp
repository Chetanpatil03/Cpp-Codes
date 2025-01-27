#include<iostream>
using namespace std;

class Third
{
    int a[10],n;
    public:
        void get();
        void dis();
};

void Third::get()
{
    cout<<"Enter array size :: MAX 10  :: ";
    cin>>n;

    cout<<"Enter array elements :: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter at [ "<<i+1<<" ] :: ";
        cin>>a[i];
    }
}

void Third::dis()
{
    cout<<"\nArray elements are "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Element at [ "<<i+1<<" ] :: "<<a[i]<<endl;
    }
}

int main()
{
    Third t;
    t.get();
    t.dis();

    return 0;
}

