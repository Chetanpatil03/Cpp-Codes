#include<iostream>
using namespace std;

int Addition(int a, int b)
{
    return a+b;
}

int Addition(int a,int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter numbers :: ";
    cin>>a>>b>>c;

    cout<<"\nThe addition of first two numbers are :: "<<Addition(a,b);
    cout<<"\nThe addition of numbers are :: "<<Addition(a,b,c);
    cout<<"\nThe average of numbers are :: "<<Addition(a,b,c)/3;


    return 0;
}