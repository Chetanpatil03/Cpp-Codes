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
};

int main(){
    


    return 0;
}