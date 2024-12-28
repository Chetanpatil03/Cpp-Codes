#include<iostream>
#include<string>
using namespace std;

int main(){

    string teaType = "Lemon tea";
    float basePrice;
    char teaRating= 'A';

    cout<<"Enter base price of the tea:";
    cin>>basePrice;

    cout<<"After  10% :";
    int finalPrice = (int) (basePrice/100)*10;
    cout<<finalPrice;
    return 0;
}