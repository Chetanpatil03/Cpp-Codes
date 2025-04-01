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
