#include<iostream>
using namespace std;

class Demo{
    // Creating class and its members
    public:
        int a=25;
};

int main()
{
    cout<<"Hello world!";
    Demo d; //Object creation 
    cout<<d.a; //Accessing the members of class using its object
}