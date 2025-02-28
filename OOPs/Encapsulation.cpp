#include<iostream>
using namespace std;

class FalseApp{ //not a encapsulation because there is public data members every one can access and modify the data members.
    public:
        int p,q;

    public: void setP(int input){
        p = input;
        q = p/2;
    }
};

class App{ 
    private: int p;
    private: int q; //rule of the encapsulation data members should private.

    public: void setP(int input){
        p = input;
        q = p/2;

        cout<<"Value of Q : "<<q;
    }
};

int main(){
    // FalseApp obj;
    // obj.p = 6;
    // obj.q=12;
    // cout<<obj.q;

    // App obj;
    // obj.p = 6;
    // obj.q=12; this will give error because we can't access the private data members.
    // cout<<obj.q;

    App obj;
    obj.setP(8); // this is real encapsulation you can't access the private data members only member functions.
    return 0;

}