#include<iostream>
using namespace std;
class Students
{
    public:
        int roll;
        string name;
        int age;
        bool gender;
};

int main()
{
    Students chetan;
    chetan.name = "Chetan";
    chetan.age = 21;
    chetan.gender = 1;
    chetan.roll = 1;

    Students prafull;
    prafull.name = "Prafull";
    prafull.age = 21;
    prafull.gender = 1;
    prafull.roll = 38;

    cout<<"First Student : "<<chetan.name<<endl;
    cout<<"Second Student : "<<prafull.name<<endl;

    cout<<"Age 1 : "<<chetan.age<<endl;
    cout<<"Age 2 : "<<prafull.age<<endl;

    if (chetan.gender)
    {
        cout<<"First student is male";
    }else{
        cout<<"First student is female";
    }
    


}