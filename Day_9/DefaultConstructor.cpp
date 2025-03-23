#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    public :
        string teaName;
        int servings;
        vector<string> ingredients;

        //default constructor;
        Chai(){
            // 

            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"Water","Tea","Tea leaves"};

            cout<<"Constructor called"<<endl;


        }
    
        void displayChaiDetails(){
            cout<<"Tea name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingridients : ";

            for (string ingredient : ingredients)
            {
                cout<<" "<<ingredient;
            }
            cout<<endl;
        }

};


int main(){
    cout<<"Constructors in cpp";
    Chai chai;

    chai.displayChaiDetails();
    return 0;

}