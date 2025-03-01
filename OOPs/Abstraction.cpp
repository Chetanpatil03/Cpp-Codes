#include<iostream>
using namespace std;

class App{ 
    private: int p;
    private: int q; 

    public: void setP(int input){ //user will access this block 
        p = input;
        q = p/2;

        cout<<"Value of Q : "<<q;
    }//hide the implementation code only show the essential information.
};

int main(){
    App obj;
    obj.setP(8);
    return 0;

}