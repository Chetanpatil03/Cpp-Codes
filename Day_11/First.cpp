#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredieants;
    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredieants = {"Water","Tea leaves"};
        }
        Chai(int serv,string name,vector<string>ingre){
            teaName = name;
            servings = serv;
            ingredieants = ingre;
        }

        //getter and setter methods

        string getTeaName(){
            return teaName;
        }

        void setTeaName(string name){
            teaName = name;
            //logic here like tea name in uppercase or lowercase

        }

        int getServings(){
            return servings;
            //getter for servings
        }

        void setServingns(int serv){
            servings = serv;
            //setter for servings
        }

        vector<string> getIngredients(){
            return ingredieants;
            //getter for ingredients
        }

        void setIngredients(vector<string> ingre){
            ingredieants = ingre;
            //setter for  ingredients
        }

        void displayTea(){
            cout<<"\nTea name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingredients : ";
            for (string str : ingredieants)
            {
                cout<<str<<" ";
            }
            cout<<endl;
            
        }

        
};

int main(){
    // cout<<"Getter and setter methods"<<endl;
    

    Chai ch ;
    cout<<"Default details of chai : "<<endl;
    ch.displayTea();

    ch.setTeaName("Lemon tea");
    ch.setServingns(5);
    ch.setIngredients({"Water","Tea leaves","Lemon","ginger"});

    cout<<"\n--Tea name : "<<ch.getTeaName()<<endl;
    cout<<"Servings : "<<ch.getServings()<<endl;
    cout<<"Ingredients : ";
    for(string s: ch.getIngredients()){
        cout<<s<<" ";
    }
    cout<<endl;


    ch.displayTea();


    return 0;
}