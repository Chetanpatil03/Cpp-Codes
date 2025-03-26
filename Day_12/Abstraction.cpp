#include<iostream>
using namespace std;

class Tea{ // abstract classs
    //not implementation only blueprint or declaratiion 
    public:
       virtual void prepareIngridients() = 0 ;  //pure virtual function  abstract methods.
       //it needs to override

       virtual void brew() = 0;
       virtual void serve() = 0;

       void makeTea(){
            prepareIngridients();
            brew();
            serve();
       }
};

//derived class
class GreenTea : public Tea{
    public : 
        void prepareIngridients() override {
            cout<<"Water and green Leaves is ready"<<endl;
        }
        void brew() override {
            cout<<"Green Tea brewed"<<endl;
        }
        void serve() override {
            cout<<"Green Tea Server"<<endl;
        }

};

class MasalaTea : public Tea{
    public : 
        void prepareIngridients() override {
            cout<<"Water and tea leaves is ready"<<endl;
        }
        void brew() override {
            cout<<"Masala Tea brewed"<<endl;
        }
        void serve() override {
            cout<<"Masala Tea Server"<<endl;
        }

};

int main(){

}