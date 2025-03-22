#include<iostream>

using namespace std;

int main(){
    cout<<"Hello world!";
    int arr[] = {15,565,69,65,96,896,65};
    int size = sizeof(arr)/sizeof(int);
    cout<<size;
    int sum = 0;

    for(int i: arr){
        sum = sum + i;
    }

    cout<<"Sum of array : "<<sum;
}