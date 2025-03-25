#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        //main constructor

        Chai(string name,int serv,vector<string> ingre){
            teaName = name;
            servings = serv;
            ingredients = ingre;

            cout<<"Main constructor called !"<<endl;
        }

        //delegating constructor

        Chai(string name): Chai(name,1,{"Water","tea leaves"}){}

        //so it will take only one agrument and set default values with the help of main constructor.

        void displayTea(){
            cout<<"\nTea name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingredients : ";
            for (string str : ingredients)
            {
                cout<<str<<" ";
            }
            cout<<endl;
            
        }
};

int main(){
    cout<<"Delegation constructor";

    Chai quickChai("Quick chai");
    quickChai.displayTea();

    //to create object of chai need three parameters -- teaName,Servings,Ingredients
    //but in some cases user want a quick tea so it just pass the first parameter to handle that delegation constructor are used.
    //this is used in javascripts engine.(v8 engine)



    return 0;
}