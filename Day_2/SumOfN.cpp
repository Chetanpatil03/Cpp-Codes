#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    int sum = 0;
    for (int i = a ; i > 0; i--)
    {
        sum = sum + i;
    }
    cout<<"Sum of first "<<a<<" Numbers is : "<<sum;

    return 0;
    
}