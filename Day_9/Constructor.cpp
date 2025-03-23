#include<iostream>
#include<vector>
using namespace std;

class Chai
{
    public :
        string teaName;
        int servings;
        vector<string> ingredients;

        Chai(){
            cout<<"Constructor called";
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
    return 0;
}