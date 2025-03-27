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
class child : public Demo1{
    
};

int main(){
    child ch;
    ch.sayHello();


    return 0;
}