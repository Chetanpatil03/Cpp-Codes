#include<iostream>
using namespace std;

class Animal{
    public: void Eat(){
        cout<<"Animal is Eating................"<<endl;
    }
    public: void Walk(){
        cout<<"Animal is Walking................"<<endl;
    }
};

class Dog:public Animal{
    public:void Bark(){
        cout<<"Dog is Barking................"<<endl;
    }
};

class Cat:public Animal{
    public : void Meow(){
        cout<<"Cat is Meowing...................."<<endl;
    }
};

int main(){
    Cat c;
    Dog d;
    Animal a;

    // With dog and cat class objects we can access the properties of Animal class.
    d.Eat();
    d.Walk();
    c.Eat();
    c.Walk();
    

    // The Cat, Dog and Animal class can access there member functions.
    d.Bark();
    c.Meow();
    a.Eat();



}