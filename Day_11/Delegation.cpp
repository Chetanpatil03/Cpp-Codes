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



    return 0;
}