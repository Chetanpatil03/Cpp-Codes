#include<iostream>
using namespace std;

class Animal{
    public: void Eat(){
        cout<<"Animal is Eating................";
    }
};

class Dog:public Animal{
    public:void Bark(){
        cout<<"Dog is Barking................";
    }
};

class Cat:public Animal{
    public : void Meow(){
        cout<<"Cat is Meowing....................";
    }
};

int main(){
    Cat c;
    Dog d;
    Animal a;
}