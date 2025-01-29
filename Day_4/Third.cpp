#include<iostream>
using namespace std;

int main()
{
    int a=10,b=15,c;
    cout<<"Enter number";
    cin>>c;

    if (a>b&&a>c)
    {
        if (a>=15)
        {
            cout<<"A is largest number and it is also greater than 15";
        }
        else
        {
            cout<<"A is largest number but it is smaller than 15";
        }
    }
    else if (b>a&&b>c)
    {
        if (b>=10)
        {
            cout<<"B is Largest and greater than 10";
        }
        else{
            cout<<"B is largest";
        }
        
        
    }
    else{
        cout<<"C is largest number";
    }
        
}