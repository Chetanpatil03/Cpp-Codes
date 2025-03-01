#include<iostream>
using namespace std;

class Demo{
    public:
        virtual void print() {  //virtual keyword for calling the derived class method.
            cout<<"Print base class"<<endl;
        }
        void show(){
            cout<<"Show base class"<<endl;
        }
};

class DemoTwo : public Demo{
    public:
        void print(){
            cout<<"Print Derived class"<<endl;
        }
};

int main()
{
    Demo *bptr;
    DemoTwo d;
    bptr = &d;
    bptr->print();
    bptr->show();

    return 0;
}