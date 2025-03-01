#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int sum(int a){
    return a+10;
}

int sum(int a, int b,int c){
    return a+b+c;
}

int main(){
    cout<<sum(14)<<endl;
    cout<<sum(14,25,34)<<endl;
    cout<<sum(19,18)<<endl;

    return 0;
}