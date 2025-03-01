#include<iostream>
using namespace std;

class Parent{
    public:
        int p;
};

class Child : public Parent{
    public:
        int c;
};

int main()
{
    Child obj;
    obj.c=78;
    obj.p=2;
    cout<<"Child is : "<<obj.c<<endl;
    cout<<"Parent is : "<<obj.p<<endl;

    return 0;

}