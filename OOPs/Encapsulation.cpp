#include<iostream>
using namespace std;

class App{ //not a encapsulation because there is public data members every one can access and modify the data members.
    public:
        int p,q;

    public: void setP(int input){
        p = input;
        q = p/2;
    }
};

int main(){
    // App obj;
    // obj.p = 6;
    // obj.q=12;
    // cout<<obj.q;
    
}