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
        }

        void setServingns(int serv){
            servings = serv;
        }

        
};

int main(){
    cout<<"Getter and setter methods"<<endl;
    

    Chai ch ;
    
    ch.setTeaName("HCnnu");
    cout<<ch.getTeaName();

    return 0;
}