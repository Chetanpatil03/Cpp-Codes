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

        friend bool compareServings(const Chai& chai1,const Chai& chai2);

};

bool compareServings(const Chai& chai1,const Chai& chai2){
    return chai1.servings > chai2.servings;
}

int main(){
    Chai masalaTea("Masala tea",14);
    Chai gingerTea("Ginger tea",8);

    //scenario is we have to find out who have more servings.
    //but the member variables are private so for use the friend function can be used.
    //accessing the private variables 
    //you can create friend class also
    //it can also be solved by getter and setter methods.

    masalaTea.display();
    gingerTea.display();

    if(compareServings(masalaTea,gingerTea)){
        cout<<"Masala tea have more servings than ginger tea"<<endl;
    }
    else{
        cout<<"Ginger tea have more servings than masala tea"<<endl;
    }
}