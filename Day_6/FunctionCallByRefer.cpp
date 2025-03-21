#include<iostream>
using namespace std;

void pourChai(int &cups){ //parameters,like a placeholder 
    cups = cups +5;
    cout<<"Poured Cups :"<<cups<<endl; //changes in actual value.
}

int main(){
    // cout<<"hello world!";

    int chaiCups = 2;
    pourChai(chaiCups); //arguments, call by reference  ,actual is given

    cout<<"Total cups are "<<chaiCups<<endl;
}




// For demonstration of call by reference and call by value.
// For demonstration of call by reference and call by value.