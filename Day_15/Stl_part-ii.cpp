#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<numeric>
#include<iterator>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp){
    cout<<"id : "<<emp.id<<", Name: "<<emp.name<<", Salary : $"<<emp.salary<<endl;
}

int main(){
    vector<Employee> employees = { //containers for storage
        {101,"Chetan",1000.00},
        {102,"Hitesh",2000.00},
        {103,"Shubam",900.00},
        {104,"Prafull",950.00},
        {105,"Dipak",1100.00}

    };

    //lambadas sorting []() denoted
    sort(employees.begin(),employees.end(), [](const Employee& e1, Employee& e2){ 
        return e1.salary > e2.salary;
    });


}
