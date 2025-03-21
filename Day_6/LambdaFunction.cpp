#include<iostream>

using namespace std;

void hello(){

}

int main(){
    //lambda syntax
    //anonymus functions

    auto preparedChai = [](int cups){
        cout<<"Preparing "<<cups <<" Cups of tea"<<endl;
    };

    preparedChai(2);

    return 0;
}