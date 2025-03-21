#include<iostream>

using namespace std;

void hello(){
    cout<<"Say Hello....."<<endl;
    cout<<"Good Morning...."<<endl;

}

int main(){
    //lambda syntax
    //anonymus functions

    auto preparedChai = [](int cups){
        cout<<"Preparing "<<cups <<" Cups of tea"<<endl;
    };

    preparedChai(2);

    hello();

    return 0;
}