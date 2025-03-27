#include<iostream>

using namespace std;

class Demo1{

    public:
        void sayHello(){
            cout<<"Class demo 1";
        }
};

class child : public Demo1{
    
};

int main(){
    child ch;
    ch.sayHello();
    

    return 0;
}