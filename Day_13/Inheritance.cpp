#include<iostream>

using namespace std;

//base,parent,original,super class
class Tea{
    protected:
        //derived class allowed
        string teaName;
        int servings;
    

    public:
        Tea(string name,int serv): teaName(name),servings(serv){
            cout<<"Tea constructor called "<<teaName <<endl;
        }

        virtual void brewTea() const{
            cout<<"Brewing "<<teaName<<"with generic method"<<endl;
        }
        virtual void servTea() const{
            cout<<"Serving "<< servings<<" cups of tea "<<teaName<<"with generic method"<<endl;
        }

        ~Tea(){
            cout<<"Tea destructor called for "<<endl;
        }
};

//derived,child,sub,inherited class
class GreenTea : public Tea{ //inherited
    public:
        GreenTea(int serv): Tea("Green Tea",serv){ //called base class constructor
            cout<<"Green Tea Constructor called"<<endl;
        };

        void brewTea() const override{
            cout<<"Brewing : "<< teaName <<"By steepping green tea leaves"<<endl;
        }

        void servTea() const override{

        }

        ~GreenTea(){
            cout<<"Green tea destructor called"<<endl;
        }

};

class MasalaTea : public Tea{
    public :
        MasalaTea(int serv) : Tea("Masala tea",serv){
            cout<<"Masala tea constructor called"<<endl;
        }

        void brewTea() const override final{
            cout<<"Brewing : "<< teaName <<"With spices and milk"<<endl;
        }

        ~MasalaTea(){
            cout<<"Masala tea destructor called"<<endl;
        }
};

// class SpicyMasalaTea : public MasalaTea {
//     public:
//     void brew()const override { //can't because of final keyword but you can do it from Tea class.
//         cout<<"Brewing : "<< teaName <<"With spices and milk"<<endl;
//     }
// };


int main(){

    //new way -- to create object
    
    Tea* tea1 = new GreenTea(2); //pointing to base class 
    Tea* tea2 = new MasalaTea(4);

    tea1 ->brewTea(); //pointing to methods
    tea1->servTea();


    tea2->brewTea();
    tea2->servTea();

    tea1->~Tea();
    tea2->~Tea();


    return 0;
}