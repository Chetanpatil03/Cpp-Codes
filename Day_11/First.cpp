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
            cout<<" Tea name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingredients : ";
            for (string str : ingredieants)
            {
                cout<<str<<" ";
            }
            
        }

        
};

int main(){
    cout<<"Getter and setter methods"<<endl;
    

    Chai ch ;
    
    ch.setTeaName("HCnnu");
    cout<<ch.getTeaName();

    return 0;
}