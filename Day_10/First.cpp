#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Chai{
    private : 
        string teaName;
        int servings;
    
    public:
        Chai(string name,int serv): teaName(name),servings(serv) {};

        void display(){
            cout<<"Tea Name : "<<teaName<<endl;
            cout<<"Serving : "<<servings<<endl;
        }

};

int main(){
    Chai masalaTea("Masala tea",4);
    Chai gingerTea("Ginger tea",8);

    //scenario is we have to find out who have more servings.
    //but the member variables are private so for use the friend function can be used.
    //it can also be solved by getter and setter methods.

    if(){

    }
    else{
        
    }
}