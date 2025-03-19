#include<iostream>
#include<vector>
using namespace std;

class chai{
    //data members attributes
    // Creating class and its members
    // public:
    //     int a=25;

    string teaName; //name of the tea
    int servings;  //number of serveins
    vector<string> ingridients;  //list of ingridients to make tea

    //member functions
    void displayChaiDetails(){
        cout<<"Tea name : "<<teaName<<endl;
        cout<<"Servings : "<<servings<<endl;
        cout<<"Ingridients : ";
        for (string ingridient : ingridients)
        {
            cout<<" "<<ingridient;
        }
        cout<<endl;
        
    }
};

int main()
{
//    cout<<"Hello world!";
    Demo d; //Object creation 
    cout<<d.a; //Accessing the members of class using its object
}
