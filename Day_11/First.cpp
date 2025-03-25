#include<iostream>
#include<vector>

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
};

int main(){
    cout<<"Getter and setter methods";
    return 0;
}