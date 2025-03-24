#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    public :
        string *teaName;
        int servings;
        vector<string> ingredients;

        //its all good until pointers are not arrieved.

        //Copy constructor;
        Chai(string name,int serv, vector<string> ingre){

            teaName = new string(name);
            servings = serv;
            ingredients = ingre;

            cout<<"Copy Constructor called"<<endl;


        }
    
        void displayChaiDetails(){
            cout<<"Tea name : "<<*teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingridients : ";

            for (string ingredient : ingredients)
            {
                cout<<" "<<ingredient;
            }
            cout<<endl;
        }

        ~Chai(){
            delete teaName;
            cout<<"Distructor has been called";
        }
};


int main(){
    // cout<<"Constructors in cpp";
    Chai lemonTea("Lemon Tea",2,{"Water","Tea leaves","Lemon","Honey"});

    lemonTea.displayChaiDetails();

    Chai copiedChai = lemonTea; //makes copy of the original object
    copiedChai.displayChaiDetails();

    // lemonTea.teaName = "Modified lemon tea";  //update in only origanal not on copied.

    // cout<<"lemon tea"<<endl;
    // lemonTea.displayChaiDetails(); 
    // cout<<"Copied Tea : "<<endl;
    // copiedChai.displayChaiDetails();

    



    return 0;

}

// 
