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

class GreenTea : public Tea{
    
}

int main(){

}