#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    public :
        string *teaName;
        int servings;
        vector<string> ingredients;

        //parameterized constructor;
        Chai(string name,int serv, vector<string> ingre){

            teaName = new string(name);
            servings = serv;
            ingredients = ingre;

            cout<<"Constructor called"<<endl;


        }

        Chai(Chai & other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;

            cout<<"Copy constructor is called"<<endl;
        }

        ~Chai(){
            delete teaName;
            cout<<"Distructor called"<<endl;
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

};


int main(){
    // cout<<"Constructors in cpp";
    Chai lemonTea("Lemon Tea",2,{"Water","Tea leaves","Lemon","Honey"});
    //lemonTea.displayChaiDetails();

    //copy the object
    Chai copiedChai = lemonTea;
    //copiedChai.displayChaiDetails();


    *lemonTea.teaName = "Modified lemon tea";  //update in only origanal not on copied.

    cout<<"lemon tea-----------------"<<endl;
    lemonTea.displayChaiDetails(); 
    cout<<"Copied Tea : --------------"<<endl;
    copiedChai.displayChaiDetails();
    return 0;

}